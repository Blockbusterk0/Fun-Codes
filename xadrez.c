#include <stdio.h>


int main()
{
    int linha;
    int repeticoes1, repeticoes2;
    char palavra[] = "teste";       // Troque essa palavra 
    int caracteres = sizeof(palavra) - 1;
    int contador;
    for(linha = 1; linha <= 10; linha++)
    {
        for(repeticoes1 = 0; repeticoes1 <=5; repeticoes1++)
        {
            printf("%s", palavra);
            for(contador = 1; contador <= caracteres; contador++ ){
            printf(" ");}
        }
        printf("\n");
        for(repeticoes2 = 0; repeticoes2 <=5; repeticoes2++)
        {
            for(contador = 1; contador <= caracteres; contador++ ){
            printf(" ");}
            printf("%s", palavra);
        }
        printf("\n");
    }
}
