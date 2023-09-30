#include<stdio.h>

main (){
 
double chicoAltura = 1.50, zeAltura = 1.10;
int anos = 0;

while( zeAltura <= chicoAltura){
       chicoAltura += 0.02;
       zeAltura += 0.03;
       anos ++;

}

printf("seram necessarios %d anos para que ze fique maior que chico", anos);

return 0;


}