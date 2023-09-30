#include<stdio.h>

main(){

double A, B, C;
 
 printf("digite os valores de A, B e C: ");
 scanf("%lf %lf %lf", &A, &B, &C);


if( A + B > C && A + C > B && B + C > A){

    if( A == B  && B == C  && A == C ){
       printf("o triangulo e equilatero!\n");

    }else if (A == B || A == C || B == C ){
       printf("o triangulo e isoceles!\n");

    }else{
       printf("o triangulo e escaleno!\n");

    }
    }else{
       printf("nao e possivel identificar o triangulo com esses valores\n");
    
    }
    

 return 0;

}
