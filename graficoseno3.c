#include <stdio.h>
#include <math.h>

int timer(float a)
{
    int i;
    for (i = 1; i < a*500000000; i++)
    {}
}

int printLinha(float a, float b, float x, char text[])
{
    float y = -a * cos(x) + b;
    for (float desenho = 0; desenho <= y; desenho = desenho + 0.1)
    {
        printf(" "); // Espaco
    }
    printf("%s",text);
    timer(0.05);
    printf("\n");    
}

int main()
{
    float linha = 0;
    float a = 1;
    float b = 1;
    float linhaintervalo = 0.1;

    while(linha < 1000)
    {
    printLinha(-1*a, b, linha, "A");
    linha += linhaintervalo;
    printLinha(1*a, b, linha, "B");
    linha += linhaintervalo;
    }
}
