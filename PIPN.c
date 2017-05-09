#include <stdio.h>
int main()
{
       int matriz [3][3] = {{5,10,-12},{9,-10,6},{8,11,-13}};


        printf("La matriz es la siguiente \n");
        int w, z;
        for ( w = 0; w < 3; w++) {

            for (z = 0; z < 3; z++) {

                printf("%d  ", matriz[w][z]);

            }

            printf("\n");
        }

        printf("\n");

        printf("los siguientes numero son positivos: ");
        int i, j;
        for (i = 0; i < 3; i++) {

            for (j = 0; j < 3; j++) {
                if (matriz[i][j] > 0) {

                    printf("%d  ",matriz[i][j]);
                }

            }
        }
        printf("\n");
        printf("\n");
        printf("Los siguientes numero son negativo: ");
        int x, y;
        for (x = 0; x < 3; x++) {

            for (y = 0; y < 3; y++) {

                if (matriz[x][y] < 0) {

                    printf("%d  ", matriz[x][y]);

                }

            }

        }

        printf("\n");
        printf("\n");
        printf("Los siguientes son numeros pares: ");
        int k, l;
        for (k = 0; k < 3; k++) {

            for (l = 0; l < 3; l++) {

                if (matriz[k][l] % 2 == 0) {

                    printf("%d  ",matriz[k][l] );

                }
            }

        }

        printf("\n");
        printf("\n");
        printf("Los siguientes sosn numeros impares: ");
        int a, b;
        for (a = 0; a < 3; a++) {

            for (b = 0; b < 3; b++) {

                if (matriz[a][b] % 2 == 1) {
                   printf("%d  ",matriz[a][b] );

                }
            }

        }

        printf("\n");
           return 0;
    }




