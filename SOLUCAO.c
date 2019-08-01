#include <stdio.h>

int main()
{
    /* independente da entrada que o usuario fornecia bastava antes da fabricação
    do bolo verificar se o numero de ingredientes fornecidos atendia os requisitos
    para fazer o bolo, atendido os requisitos bastava um laço de repetição para
    contabilizar o numero de bolos que poderiam ser produzidos ate esgotar os recursos*/
    int resultado,A,B,C;
    
    scanf("%d %d %d", &A,&B,&C);
    for(resultado = 0;A >= 2 && B >= 3 && C >= 5;A-=2,B-=3,C-=5){
        resultado++;
    }
    printf("%d",resultado);

    return 0;
}
