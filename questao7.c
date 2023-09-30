#include <stdio.h>

main() {


    int numAlunos = 30;

    float n1, n2, n3, mediaPonderada, mediaGeral = 0;

    for (int i = 1; i <= numAlunos; i++) {
    
        printf("digite as tres notas do aluno %d: ", i);
        scanf("%f %f %f", &n1, &n2, &n3);


        mediaPonderada = (n1 * 2 + n2 * 4 + n3 * 3)/10.0;
        
        printf("media ponderada do aluno %d: %.2f\n", i, mediaPonderada);
    }

    return 0;
}