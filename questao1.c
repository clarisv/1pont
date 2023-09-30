#include<stdio.h>
#include<math.h>

main(){

double x, resultado;

printf("digite um valor para x ( maior que 4): ");
scanf("%lf", &x);


 if (x >= 4){

    resultado = 5 * x + 3 / sqrt ( x * x - 16 );

    printf("o valor de f(x) e: %.2lf\n", resultado);



}

 return 0;

}