#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

char board[3][3];

int sorteio(int limite)
{
    int dado = rand() % limite ;
    return dado;
}

void jogo_limpar_grade()
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            board[i][j] = ' ';
        }
    }
}

int jogo_numero_jogadores()
{
    int jogadores;
    printf("\nEscolha o numero de jogadores     [1]     [2]\n");
    while (jogadores != 1 && jogadores != 2)
    {
        scanf("%d", &jogadores);
    }
    return jogadores;
}

int jogo_teste_empate()
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (board[i][j] == ' ')
            {
                return 0;
            }
        }
    }
    return 1;
}

int jogo_teste_vitoria()
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] == board[i][2])
        {
            if (board[i][0] == 'X')
            {
                return 1;
            }
            else if (board[i][0] == 'O')
            {
                return 2;
            }
        }
    }
    for (j = 0; j < 3; j++)
    {
        if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[0][j] == board[2][j])
        {
            if (board[0][j] == 'X')
            {
                return 1;
            }
            else if (board[0][j] == 'O')
            {
                return 2;
            }
        }
    }
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] == board[2][2])
        {
            if (board[0][0] == 'X')
            {
                return 1;
            }
            else if (board[0][0] == 'O')
            {
                return 2;
            }
        }
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] == board[2][0])
        {
            if (board[0][2] == 'X')
            {
                return 1;
            }
            else if (board[0][2] == 'O')
            {
                return 2;
            }
        }
    return 0;
}

void jogo_jogar_jogador(int jogador)
{
    int input_linha, input_coluna;
    char marcador;
    switch(jogador)
    {
        case 1:
            marcador = 'X';
            break;
        case 2:
            marcador = 'O';
            break;
    }
    printf("Vez do jogador %d.", jogador);
    while (1 == 1)
    {
        printf("\nDigite a linha que voce quer jogar: ");
        scanf("%d", &input_linha);
        while (input_linha < 1 || input_linha > 3)
        {
            printf("Digite uma linha valida que voce quer jogar: ");
            scanf("%d", &input_linha);
        }
        printf("Digite a coluna que voce quer jogar: ");
        scanf("%d", &input_coluna);
        while (input_coluna < 1 || input_coluna > 3)
        {
            printf("Digite uma coluna valida que voce quer jogar: ");
            scanf("%d", &input_coluna);
        }
        if (board[input_linha-1][input_coluna-1] != ' ')
        {
            printf("Lugar ja escolhido.");
            continue;
        }
        else if (board[input_linha-1][input_coluna-1] == ' ')
        {
            board[input_linha-1][input_coluna-1] = marcador;
            break;
        }
    }
    jogo_imprimir_grade();
    



}

void jogo_jogar_robo(int jogador)
{
    int input_linha, input_coluna;
    char marcador;
    switch(jogador)
    {
        case 1:
            marcador = 'X';
            break;
        case 2:
            marcador = 'O';
            break;
    }
    printf("\nAguarde, o robo esta pensando...");
    while (1 == 1)
    {
        input_linha = sorteio(3);
        input_coluna = sorteio(3);
        if (board[input_linha][input_coluna] != ' ')
        {
            continue;
        }
        else if (board[input_linha][input_coluna] == ' ')
        {
            board[input_linha][input_coluna] = marcador;
            break;
        }
    }
    jogo_imprimir_grade();
}

void jogo_imprimir_grade()
{
    printf("\n\n\n  1   2   3 ");
    printf("\n1 %c | %c | %c ", board[0][0], board[0][1], board[0][2]);
    printf("\n -------|---");
    printf("\n2 %c | %c | %c ", board[1][0], board[1][1], board[1][2]);
    printf("\n ---|-------");
    printf("\n3 %c | %c | %c \n", board[2][0], board[2][1], board[2][2]);
}

int main()
{
    srand(time(0));
    int jogadores;
    int vitoria;
    int empate;
    char jogar_novamente;
    while (1 == 1)
    {
        vitoria = 0;
        empate = 0;
        printf("\n\n\n\n\nJogo da Velha");
        jogo_limpar_grade();
        jogadores = jogo_numero_jogadores();
        jogo_imprimir_grade();
        if (jogadores == 1)
        {
            int jogador_comeca = sorteio(2);
            if (jogador_comeca == 0)
            {
                while (vitoria == 0 && empate == 0)
                {
                    jogo_jogar_robo(1);
                    vitoria = jogo_teste_vitoria();
                    empate = jogo_teste_empate();
                    if (vitoria != 0 || empate != 0)
                    continue;
                    jogo_jogar_jogador(2);
                    vitoria = jogo_teste_vitoria();
                    empate = jogo_teste_empate();
                    if (vitoria != 0 || empate != 0)
                    continue;
                }
                if (vitoria == 1)
                {
                    printf("O robo venceu!");
                }
                else if (vitoria == 2)
                {
                    printf("Voce venceu!");
                }
                else if (empate == 1)
                {
                    printf("O jogo empatou!");
                }
            }
            else if (jogador_comeca == 1)
            {
                while (vitoria == 0 && empate == 0)
                {
                    jogo_jogar_jogador(1);
                    vitoria = jogo_teste_vitoria();
                    empate = jogo_teste_empate();
                    if (vitoria != 0 || empate != 0)
                    continue;
                    jogo_jogar_robo(2);
                    vitoria = jogo_teste_vitoria();
                    empate = jogo_teste_empate();
                    if (vitoria != 0 || empate != 0)
                    continue;
                }
                if (vitoria == 1)
                {
                    printf("Voce venceu!");
                }
                else if (vitoria == 2)
                {
                    printf("O robo venceu!");
                }
                else if (empate == 1)
                {
                    printf("O jogo empatou!");
                }

            }
        }
        else if (jogadores == 2)
        {
            while (vitoria == 0 && empate == 0)
            {
                jogo_jogar_jogador(1);
                vitoria = jogo_teste_vitoria();
                empate = jogo_teste_empate();
                if (vitoria != 0 || empate != 0)
                continue;
                jogo_jogar_jogador(2);
                vitoria = jogo_teste_vitoria();
                empate = jogo_teste_empate();
                if (vitoria != 0 || empate != 0)
                continue;
            }
            if (vitoria == 1)
            {
                printf("O jogador %d venceu!", vitoria);
            }
            else if (vitoria == 2)
            {
                printf("O jogador %d venceu!", vitoria);
            }
            else if (empate == 1)
            {
                printf("O jogo empatou!");
            }
        }
        printf("\nDeseja jogar novamente?     [s]     [n]\n");
        scanf("%c", &jogar_novamente);
        while (jogar_novamente != 's' && jogar_novamente != 'n')
        {
            scanf("%c", &jogar_novamente);
        }
        if (jogar_novamente == 's')
        {
            continue;
        }
        else if (jogar_novamente == 'n')
        {
            break;
        }            
    }
}