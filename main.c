#include <stdio.h>
#include <stdlib.h>

int main() {
    // iniciei os valores com 2 para conseguir fazer a verificação no while
    int numeroLinhasMatriz = 2;
    int numeroDeColunasMatriz = 2;
    // declarando matriz
    char **matriz;
    int pontoInicialLinha = 1;
    int pontoInicialColuna = 1;

    // validando numero de linhas da matriz
    while (numeroLinhasMatriz % 2 == 0 || numeroLinhasMatriz < 3) {
        printf("Digite o numero de linhas da matriz!");
        scanf("%d", &numeroLinhasMatriz);
    }

    // validando numero de linhas da coluna
    while (numeroDeColunasMatriz % 2 == 0 || numeroDeColunasMatriz < 3) {
        printf("Digite o numero de colunas da matriz!");
        scanf("%d", &numeroDeColunasMatriz);
    }

    // alocando numero de linhas da matriz
    matriz = malloc( sizeof( numeroLinhasMatriz ) * sizeof( char* ));

    // alocando numero de colunas da matriz
    for ( int i = 0; i < numeroDeColunasMatriz; i++ ) {
        matriz[i] = malloc( sizeof (char) * numeroDeColunasMatriz );
    }

    // validando ponto inicial
    while (pontoInicialLinha % 2 != 0 || pontoInicialColuna % 2 != 0 || (pontoInicialLinha >= numeroLinhasMatriz || pontoInicialColuna >= numeroDeColunasMatriz)) {
        printf("Digite o ponto inicial linha da escavacao !");
        scanf("%d", &pontoInicialLinha);
        printf("Digite o ponto inicial coluna da escavacao !");
        scanf("%d", &pontoInicialColuna);
    }

    // preenchendo matriz oom ansi 219
    for (int i = 0; i < numeroLinhasMatriz; i++) {
        for(int j = 0; j < numeroDeColunasMatriz; j++) {
            matriz[i][j] = 219;
        }
   }
}
