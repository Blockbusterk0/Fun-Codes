#include <stdio.h>
#include <math.h>
int main()
{
    int x;
    int linha;
    float a;
    float b;
    printf("\n");
    float grafico()
    {
        for(linha = 20;  linha > 0; linha = linha-1) //ex: linha comeca no 20, logo quero achar qual o x onde y é 20    20 = x1 + 1 ->   19 = 1x    19/1 = x
        {
            int desenho;
            int x = (linha-b)/a;
            for (desenho = 0; desenho < x; desenho = desenho + 1 )
        {
            printf(" ");
            
        }
        printf("oi");
        printf("\n");
        }
    }

    float menosgrafico()
    {
        for(linha = 0;  linha < 20; linha = linha+1) //ex: linha comeca no 20, logo quero achar qual o x onde y é 20    20 = x1 + 1 ->   19 = 1x    19/1 = x
        {
            int desenho;
            int x = (linha-b)/a;
            for (desenho = 0; desenho < x; desenho = desenho + 1 )
        {
            printf(" ");
            
        }
        printf("oi");
        printf("\n");
        }
    }


    a = 0.5;
    b = 0;
    printf("\n");
    grafico();
    menosgrafico();
    grafico();
    menosgrafico();
    grafico();
    menosgrafico();
}