#include <stdio.h>
#include <math.h>
int main()
{
    int x;
    float a = 0.25;
    float b = 0;
    float c = 0;

    printf("\n");
    
    for(x = -20;  x <= 20; x++)
    {
        int desenho;
        int funcao = a*x*x + b*x + c;
        for (desenho = 0; desenho < funcao; desenho = desenho + 1 )
        {
            printf(" ");
            
        }
        printf("o");
        printf("\n");
    }
}