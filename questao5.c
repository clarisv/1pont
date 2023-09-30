#include <stdio.h>
#include <math.h>


main() {


    float x1, y1, x2, y2, X, Y, distancia;

    printf("digite os valores de (x1 y1): ");
    scanf("%f %f", &x1, &y1);
    
    printf("digite os valores de (x2 y2): ");
    scanf("%f %f", &x2, &y2);

    X = pow ((x2 - x1), 2);
    Y = pow ((y2 - y1), 2);


    distancia = sqrt (X + Y );

    
    printf("a distância entre os pontos e: %.4f\n", distancia);

    return 0;
}
