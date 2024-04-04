#include <stdio.h>
#include <math.h>

int main()
{
    float linha;
    float a = 0.25;
    float b = 0.25;

    printf("\n");
    linha = 0;
    while (linha < 12)
    {
        float desenho;
        float y = -a * cos(linha) + b;
        float printSpace()
        {
            for (desenho = 0; desenho < y; desenho = desenho + 0.05)
            {
                printf(" "); // Espaço
            }
        }
        float nextLine()
        {
            printf("\n");
            linha = linha + 0.1;
            y = -a * cos(linha) + b;
        }
        printSpace();
        printf("bobo");
        nextLine();
        printSpace();
        printf("na");
        nextLine();
        printSpace();
        printf("casca");
        nextLine();
        printSpace();
        printf("do");
        nextLine();
        printSpace();
        printf("ovo");
        nextLine();
        printSpace();
        printf(" ");
        nextLine();
        printSpace();
        printf(" ");
        nextLine();
    }
}