/*
  Jogo da Cobra - a cobra aumenta de tamanho quando come a comida
  - As teclas de setas mudam a direção da cobra
  - A tecla ESC encerra o jogo
  - Teclas diferentes de seta e ESC, fica esperando por uma seta ou ESC
  - O jogador perde quando a cabeça da cobra toca a moldura
  - O jogador perde quando a cabeça da cobra toca um seguimento do próprio corpo
*/
#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <locale.h>

#define COORD_CANTO_SUP_ESQ_X 0
#define COORD_CANTO_SUP_ESQ_Y 0
#define COORD_CANTO_INF_DIR_X 26
#define COORD_CANTO_INF_DIR_Y 18
#define LINHA_DUPLA_V 186
#define LINHA_DUPLA_H 205
#define CANTO_SUP_ESQ 201
#define CANTO_SUP_DIR 187
#define CANTO_INF_ESQ 200
#define CANTO_INF_DIR 188
#define MAX_COBRA 300
#define INICIO_COBRA_X 1
#define INICIO_COBRA_Y 7
#define SEGMENTO_COBRA 64
#define COMIDA 219
#define SEMPRE 1
#define LIGA 1
#define DESLIGA 0
#define BATEU 1
#define NAO_BATEU 0
#define VALIDA 1
#define INVALIDA 0
#define ESPERA 500
#define CABECA 0
#define ESQUERDA 0
#define DIREITA 1
#define CIMA 2
#define BAIXO 3
#define SETA_PARA_CIMA 72 // 'H'
#define SETA_PARA_BAIXO 80 // 'P'
#define SETA_PARA_ESQUERDA 75 // 'K'
#define SETA_PARA_DIREITA 77 // 'M'
#define ENCERRAR 27

void vai_para_coodenadas_xy(int, int);
void cursor(int);
int obtem_tecla();
int pressionou_tecla();
int tecla_valida(int);
void mostra_as_regras();
void monta_moldura(int, int, int, int);
int gera_coordenada_aleatoria(int, int);
void coloca_comida(int, int);
void cria_cobra(int[], int[], int, int);
void avanca_cabeca(int[], int[]);
void desliza_cobra(int, int[], int[]);
void direciona_cabeca(int, int[], int[]);
void apaga_a_calda(int, int[], int[]);
int bateu_na_moldura(int[], int[]);
int mordeu_o_corpo(int, int[], int[]);
int comeu(int, int, int[], int[]);
void espera_um_tempo();
int muda_direcao(int);

int main()
{
    int direcao, tamanho, segmento, coord_comida_x, coord_comida_y, tecla;
    int coord_segmentos_x[MAX_COBRA], coord_segmentos_y[MAX_COBRA];

    srand(time(NULL));
    cursor(DESLIGA);
    mostra_as_regras();
    monta_moldura(COORD_CANTO_SUP_ESQ_X, COORD_CANTO_SUP_ESQ_Y,
                  COORD_CANTO_INF_DIR_X, COORD_CANTO_INF_DIR_Y);
    // Gera a posição aleatória da comida
    coord_comida_x = gera_coordenada_aleatoria(COORD_CANTO_SUP_ESQ_X + 1, COORD_CANTO_INF_DIR_X - 1);
    coord_comida_y = gera_coordenada_aleatoria(COORD_CANTO_SUP_ESQ_Y + 1, COORD_CANTO_INF_DIR_Y - 1);
    cria_cobra(coord_segmentos_x, coord_segmentos_y, INICIO_COBRA_X, INICIO_COBRA_Y);
    tamanho = 1;
    direcao = DIREITA;
    while (SEMPRE)
    {
        if (!pressionou_tecla())
        {
            desliza_cobra(tamanho, coord_segmentos_x, coord_segmentos_y);
            direciona_cabeca(direcao, coord_segmentos_x, coord_segmentos_y);
            apaga_a_calda(tamanho, coord_segmentos_x, coord_segmentos_y);
            if (comeu(coord_comida_x, coord_comida_y, coord_segmentos_x, coord_segmentos_y))
            {
                ++tamanho;
                // Gera a posicao aleatória de_outra comida
                coord_comida_x = gera_coordenada_aleatoria(COORD_CANTO_SUP_ESQ_X + 1, COORD_CANTO_INF_DIR_X - 1);
                coord_comida_y = gera_coordenada_aleatoria(COORD_CANTO_SUP_ESQ_Y + 1, COORD_CANTO_INF_DIR_Y - 1);
            } // if
            avanca_cabeca(coord_segmentos_x, coord_segmentos_y);
            coloca_comida(coord_comida_x, coord_comida_y);
            espera_um_tempo();
        }
        else
        {
            do
            {
                tecla = obtem_tecla();
            }
            while (!tecla_valida(tecla));
            direcao = muda_direcao(tecla);
        } // if
        if (tecla == ENCERRAR ||
                mordeu_o_corpo(tamanho, coord_segmentos_x, coord_segmentos_y) ||
                bateu_na_moldura(coord_segmentos_x, coord_segmentos_y))
            break;
    } // while
    cursor(LIGA);
    vai_para_coodenadas_xy(COORD_CANTO_SUP_ESQ_X, COORD_CANTO_INF_DIR_Y + 1);
    return 0;
}
// Posiciona o cursor no local indicado pelas coordenadas
void vai_para_coodenadas_xy(int coord_x, int coord_y)
{
    COORD posicao = {coord_x, coord_y};

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), posicao);
    return;
}
// Liga e desliga o cursor
void cursor(int estado)
{
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO info;

    info.dwSize = 10;
    info.bVisible = estado;
    SetConsoleCursorInfo(consoleHandle, &info);
}
// Obtem tecla pressionada
int obtem_tecla()
{

    return getch();
}
// Verifica se uma tecla foi pressionada: retorna verdadeiro ou falso
int pressionou_tecla()
{

    return kbhit();
}
// Verifica se foi presssionada uma tecla válida
int tecla_valida(int tecla)
{

    switch (tecla)
    {
    case SETA_PARA_CIMA:
    case SETA_PARA_BAIXO:
    case SETA_PARA_ESQUERDA:
    case SETA_PARA_DIREITA:
    case ENCERRAR:
        return VALIDA;
    default:
        return INVALIDA;
    }
}
// Mostra as regras do jogo
void mostra_as_regras()
{

    printf("\nJogo da Cobra - a cobra aumenta de tamanho quando come a comida\n\n");
    printf("  - As teclas de setas mudam o sentido da cobra\n");
    printf("  - A tecla ESC encerra o jogo\n");
    printf("  - Teclas diferentes de setas e ESC, o jogo fica esperando por uma seta ou ESC\n");
    printf("  - O jogador perde quando a cobra toca a moldura ou\n");
    printf("    a cobra toca um seguimento do seu corpo\n\n");
    system("pause");
    system("cls");
    return;
}
// Montagem da moldura
void monta_moldura(int canto_sup_esq_x, int canto_sup_esq_y,
                   int canto_inf_dir_x, int canto_inf_dir_y)
{
    int coord_x, coord_y;

    vai_para_coodenadas_xy(canto_sup_esq_x, canto_sup_esq_y);
    printf("%c", CANTO_SUP_ESQ);
    for (coord_x = canto_sup_esq_x + 1; coord_x <= canto_inf_dir_x - 1; coord_x++)
    {
        vai_para_coodenadas_xy(coord_x, canto_sup_esq_y);
        printf("%c", LINHA_DUPLA_H);
    }
    vai_para_coodenadas_xy(canto_inf_dir_x, canto_sup_esq_y);
    printf("%c", CANTO_SUP_DIR);
    for (coord_y = canto_sup_esq_y + 1; coord_y <= canto_inf_dir_y - 1; coord_y++)
    {
        vai_para_coodenadas_xy(canto_inf_dir_x, coord_y);
        printf("%c", LINHA_DUPLA_V);
    }
    vai_para_coodenadas_xy(canto_inf_dir_x, canto_inf_dir_y);
    printf("%c", CANTO_INF_DIR);
    for (coord_x = canto_sup_esq_x + 1; coord_x <= canto_inf_dir_x - 1; coord_x++)
    {
        vai_para_coodenadas_xy(coord_x, canto_inf_dir_y);
        printf("%c", LINHA_DUPLA_H);
    }
    vai_para_coodenadas_xy(canto_sup_esq_x, canto_inf_dir_y);
    printf("%c", CANTO_INF_ESQ);
    for (coord_y = canto_sup_esq_y + 1; coord_y <= canto_inf_dir_y - 1; coord_y++)
    {
        vai_para_coodenadas_xy(canto_sup_esq_x, coord_y);
        printf("%c", LINHA_DUPLA_V);
    }
    return;
}
// Gera coordenada aleatória no intervalo fornecido
int gera_coordenada_aleatoria(int posicao_inicial, int posicao_final)
{

    return rand() % (posicao_final - posicao_inicial) + posicao_inicial;
}
// Coloca a comida na tela
void coloca_comida(int coord_comida_x, int coord_comida_y)
{

    vai_para_coodenadas_xy(coord_comida_x, coord_comida_y);
    printf("%c", COMIDA);
    return;
}
// Cria a cobra com um seguimento a partir das coordenadas fornecidas
void cria_cobra(int coord_segmentos_x[], int coord_segmentos_y[], int inicio_cobra_x, int inicio_cobra_y)
{

    coord_segmentos_x[CABECA] = inicio_cobra_x;
    coord_segmentos_y[CABECA] = inicio_cobra_y;
    return;
}
// Posiciona a cabeça da cobra nas coodenenadas fornecidas
void avanca_cabeca(int coord_segmentos_x[], int coord_segmentos_y[])
{

    vai_para_coodenadas_xy(coord_segmentos_x[CABECA], coord_segmentos_y[CABECA]);
    printf("%c", SEGMENTO_COBRA);
    return;
}
// Desliza as coordenadas dos segmentos uma posição em direção ao final
void desliza_cobra(int tamanho, int coord_segmentos_x[], int coord_segmentos_y[])
{
    int segmento;

    for (segmento = tamanho; segmento > 0; segmento--)
    {
        coord_segmentos_x[segmento] = coord_segmentos_x[segmento - 1];
        coord_segmentos_y[segmento] = coord_segmentos_y[segmento - 1];
    }
    return;
}
// Ajusta as novas coordenadas da cabeça da cobra de acordo com a direção do momento
void direciona_cabeca(int direcao, int coord_segmentos_x[], int coord_segmentos_y[])
{

    switch (direcao)
    {
    case ESQUERDA:
        coord_segmentos_x[CABECA]--;
        break;
    case DIREITA:
        coord_segmentos_x[CABECA]++;
        break;
    case CIMA:
        coord_segmentos_y[CABECA]--;
        break;
    case BAIXO:
        coord_segmentos_y[CABECA]++;
    }
    return;
}
// Coloca um espaço em branco nas coordenadas do último segmento (indicado por tamanho)
void apaga_a_calda(int tamanho, int coord_segmentos_x[], int coord_segmentos_y[])
{

    vai_para_coodenadas_xy(coord_segmentos_x[tamanho], coord_segmentos_y[tamanho]);
    printf(" ");
    return;
}
// Retorna verdadeiro se a cobra invadiu a moldura, caso contrário responde com falso
int bateu_na_moldura(int coord_segmentos_x[], int coord_segmentos_y[])
{

    if (coord_segmentos_y[CABECA] == COORD_CANTO_SUP_ESQ_Y ||
            coord_segmentos_y[CABECA] == COORD_CANTO_INF_DIR_Y ||
            coord_segmentos_x[CABECA] == COORD_CANTO_SUP_ESQ_X ||
            coord_segmentos_x[CABECA] == COORD_CANTO_INF_DIR_X)
        return BATEU;
    else
        return NAO_BATEU;
}
// Retorna verdadeiro se a cabeça da cobra tocou em um segmento dela, caso contrário responde com falso
int mordeu_o_corpo(int tamanho, int coord_segmentos_x[], int coord_segmentos_y[])
{
    int segmento;

    for (segmento = 1; segmento < tamanho; segmento++)
    {
        if (coord_segmentos_x[CABECA] == coord_segmentos_x[segmento] &&
                coord_segmentos_y[CABECA] == coord_segmentos_y[segmento])
            return BATEU;
    }
    return NAO_BATEU;
}
// Retorna verdadeiro se a cabeça da cobra tocou na comida, caso contrário responde com falso
int comeu(int coord_comida_x, int coord_comida_y,
          int coord_segmentos_x[], int coord_segmentos_y[])
{

    if (coord_comida_x == coord_segmentos_x[CABECA] &&
            coord_comida_y == coord_segmentos_y[CABECA])
        return BATEU;
    else
        return NAO_BATEU;
}
// Gera uma espera para o avanço da cobra ser mais lento
void espera_um_tempo()
{

    Sleep(ESPERA);
    return;
}
// Examina a tecla de seta para mudar a direção da cobra
int muda_direcao(int tecla)
{

    switch(tecla)
    {
    case SETA_PARA_CIMA: // 'H'
        return CIMA;
    case SETA_PARA_BAIXO: // 'P'
        return BAIXO;
    case SETA_PARA_ESQUERDA: // 'K'
        return ESQUERDA;
    case SETA_PARA_DIREITA: // 'M'
        return DIREITA;
    }
}
