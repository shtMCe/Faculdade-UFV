#include <stdio.h>
#include <stdlib.h>

void imprime (int **mat1, int **mat2, **matproduto, int a, int b, int c, int d) {
    int i, j;
    
    for (i=0; i<a; i++) {
        for (j=0; j<b; j++) {
            printf("%d", mat1[i][j]);
        }
    }
    for (i=0; i<c; i++) {
        for (j=0; j<d; j++) {
            printf("%d", mat2[i][j]);
        }
    }
    for (i=0; i<a; i++) {
        for (j=0; j<d; j++) {
            printf("%d", matproduto[i][j]);
        }
    }
}

int main() {

	int **mat1;
	int **mat2;
	int **matproduto;

	int i, j, a, b, c, d;

	printf("Entre com as linhas e colunas de A e depois de B:\n");
	scanf("%d %d %d %d", &a, &b, &c, &d);

	mat1 = (int**) malloc ( a * sizeof(int*));
	if (mat1 == NULL)
		printf("ERRO, NAO TEM MEMORIA O SUFICIENTE\n");
		
	mat2 = (int**) malloc ( c * sizeof(int*));
	if (mat2 == NULL)
		printf("ERRO, NAO TEM MEMORIA O SUFICIENTE\n");

	for (i=0; i<a; i++) {

		mat1 = (int*) malloc ( b * sizeof(int));

		if (mat1[i] == NULL)
			printf("ERRO, NAO TEM MEMORIA O SUFICIENTE\n");

		for (j=0; j<b; i++) {

            scanf("%d", mat1[i][j]);
		}
	}

	for (i=0; i<c; i++) {

		mat2 = (int*) malloc ( d * sizeof(int));

		if (mat2[i] == NULL)
			printf("ERRO, NAO TEM MEMORIA O SUFICIENTE\n");

		for (j=0; j<d; i++) {
		    
            scanf("%d", mat2[i][j]);
		}
	}
	
    // 3 x 3   3 x 3 ---> a e d?
	matproduto = (int**) malloc ( a * sizeof(int*));
	
	for (i=0; i<c; i++) {

		matproduto = (int*) malloc ( d * sizeof(int));

		if (mat2[i] == NULL)
			printf("ERRO, NAO TEM MEMORIA O SUFICIENTE\n");

		for (j=0; j<d; i++) {
		    
            matproduto[i][j] = mat1[i][j] * mat2[i][j];
		}
	}
	
	imprime(&mat1[0][0], &mat2[0][0], &matproduto[0][0], a, b, c, d);

	return 0;
}