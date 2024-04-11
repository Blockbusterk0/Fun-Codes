#include <stdio.h>
#include <math.h>

int timer()
{
    int i;
    for (i = 1; i < 10000000; i++)
    {

    }
}

int main()
{
    float linha;
    float a = 1;
    float b = 1;

    printf("\n");
    linha = 0;
    while (linha < 100000)
    {
        float desenho;
        float y = -a * cos(linha) + b;
        int printSpace()
        {
            for (desenho = 0; desenho < y; desenho = desenho + 0.015)
            {
                printf(" "); // Espaço
            }
        }
        int nextLine()
        {
            timer();
            printf("\n");
            linha = linha + 0.1;
            y = -a * cos(linha) + b;
        }
        
        printSpace();
        printf("o");
        nextLine();
    }
}
