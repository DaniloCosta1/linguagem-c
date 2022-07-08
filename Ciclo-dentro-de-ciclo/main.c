#include <stdio.h>

int main ()
{
        char letra = 'a';


    for (int i = 1; i <= 10; i++){

        printf("**volta %i\n ", i);

        for (int j = 1; j <= 10 ; j++){

            printf("Ponto %i %c\n", j, letra );

        }

        printf("\n");

    }








    return 0;
}
