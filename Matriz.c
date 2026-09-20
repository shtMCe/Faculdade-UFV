#include <stdio.h>
#include <stdlib.h>

void imprime(int **mat1, int **mat2, int **matproduto, int a, int b, int c, int d) {
	int i, j;

	printf("MATRIZ A:\n");
	for (i = 0; i < a; i++) {
		for (j = 0; j < b; j++) {
			printf("%d ", mat1[i][j]);
		}
		printf("\n");
	}

	printf("MATRIZ C:\n");
	for (i = 0; i < c; i++) {
		for (j = 0; j < d; j++) {
			printf("%d ", mat2[i][j]);
		}
		printf("\n");
	}

	printf("MATRIZ PRODUTO:\n");
	for (i = 0; i < a; i++) {
		for (j = 0; j < d; j++) {
			printf("%d ", matproduto[i][j]);
		}
		printf("\n");
	}
}

int main() {
	int **mat1, **mat2, **matproduto;
	int i, j, k, a, b, c, d;

	printf("Entre com as linhas e colunas de A (a b) e de B (c d):\n");
	scanf("%d %d %d %d", &a, &b, &c, &d);

	mat1 = (int**) malloc(a * sizeof(int*));
	if (mat1 == NULL) {
		printf("Erro de memoria\n");
		exit(1);

	}

	for (i = 0; i < a; i++) {
		mat1[i] = (int*) malloc(b * sizeof(int));
		if (mat1[i] == NULL) {
			printf("Erro de memoria\n");
			exit(1);
		}

		for (j = 0; j < b; j++) {
			printf("ENTRE COM C NA POSICAO [%d][%d]: ", i, j);
			scanf("%d", &mat1[i][j]);
		}
	}

	mat2 = (int**) malloc(c * sizeof(int*));

	if (mat2 == NULL) {
		printf("Erro de memoria\n");
		exit(1);
	}

	for (i = 0; i < c; i++) {
		mat2[i] = (int*) malloc(d * sizeof(int));
		if (mat2[i] == NULL) {
			printf("Erro de memoria\n");
			exit(1);
		}

		for (j = 0; j < d; j++) {
			printf("ENTRE COM B NA POSICAO [%d][%d]: ", i, j);
			scanf("%d", &mat2[i][j]);
		}
	}

	// 3. Alocação da Matriz Produto (a x d)
	matproduto = (int**) malloc(a * sizeof(int*));
	if (matproduto == NULL) {
		printf("Erro de memoria\n");
		exit(1);
	}

	for (i = 0; i < a; i++) {
		matproduto[i] = (int*) malloc(d * sizeof(int));
		if (matproduto[i] == NULL) {
			printf("Erro de memoria\n");
			exit(1);
		}
	}

	for (i = 0; i < a; i++) {
		for (j = 0; j < d; j++) {
			matproduto[i][j] = mat1[i][j] * mat2[i][j];
		}
	}

	imprime(mat1, mat2, matproduto, a, b, c, d);

	for (i = 0; i < a; i++) 
	    free(mat1[i]);
	free(mat1);

	for (i = 0; i < c; i++) 
	    free(mat2[i]);
	free(mat2);

	for (i = 0; i < a; i++) 
	    free(matproduto[i]);
	free(matproduto);

	return 0;
}