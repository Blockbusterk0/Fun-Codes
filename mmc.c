#include <stdio.h>
#include <math.h>

int main()
{
    int n1, n2, m1, m2;
    printf("escolha numero 1: ");
    scanf("%d",&n1);
    printf("escolha numero 2: ");
    scanf("%d",&n2);
    m1 = n1;
    m2 = n2;
    while(m1 != m2)
    {
        m1 = m1+n1;
        while(m2 < m1)
        {
            m2 = m2+n2;
        }   
    }
    printf("mmc = %d", m1);
}
