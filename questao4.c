#include <stdio.h>

main() {

    double A, B, C;
    
    printf("digite valores para A, B e C (separados por espacos): ");
    scanf("%lf %lf %lf", &A, &B, &C);


    if (A + B > C && A + C > B && B + C > A) {

        float Aa = A * A;
        float Bb = B * B;
        float Cc = C * C; 
        
        if (Aa + Bb == Cc || Aa + Cc == Bb || Bb + Cc == Aa) {
            printf("esse triangulo e um triangulo retangulo!\n");
        }
        
        else if (Aa + Bb < Cc || Aa + Cc < Bb || Bb + Cc < Aa) {
            printf("esse triangulo e um triangulo obtusangulo!\n");
        }
    
        else {
            printf("esse triangulo e um triangulo acutangulo\n");
        }
    } else {
        printf("nao e possivel formar um triangulo com esses valores\n");
    }

    return 0;
}
