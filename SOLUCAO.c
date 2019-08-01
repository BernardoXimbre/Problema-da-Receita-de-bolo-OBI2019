#include <stdio.h>

int main()
{
    int resultado,A,B,C;
    
    scanf("%d %d %d", &A,&B,&C);
    for(resultado = 0;A >= 2 && B >= 3 && C >= 5;A-=2,B-=3,C-=5){
        resultado++;
    }
    printf("%d",resultado);

    return 0;
}
