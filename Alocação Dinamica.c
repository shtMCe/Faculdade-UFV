#include <stdio.h>
#include <stdlib.h>

int main()
{
	char **mat;
	int linhas;

	scanf("%d", &linhas);
    
	//linhas
	mat = ( char** ) malloc ( linhas * sizeof(char*) );
    
	if (mat == NULL) {
		printf("ERRO, SEM MEMORIA SUFICIENTE\n");
		exit(1);
	}
    
    int i, j;
    
	for ( i=0; i<linhas; i++) {
	    
        //colunas (tam dos nomes)
		mat[i] = ( int* ) malloc ( 50 * sizeof(char) );

		if (mat[i] == NULL) {
			printf("ERRO, SEM MEMORIA SUFICIENTE\n");
			exit(1);
		}
	}
	
	int escolha;
	
	do {
	    printf("ESCOLHA UMA OPCAO:\n");
	    printf("1. Gravar um nome em uma linha da matriz\n");
	    printf("2. Apagar o nome contido em uma linha da matriz\n");
	    printf("3. Informar um nome e substituir por outro nome\n");
	    printf("4. Informar um nome, procurar a linha onde ele se encontra e apagar\n");
	    printf("5. Recuperar o nome contido em uma linha da matriz\n");
	    
	    scanf("%d", &escolha);
	    
	} while (escolha > 5 && escolha < 0);
	
	//insere nome
	for ( i=0; i<linhas; i++) {
	    
	    for (j=0; j != '\n'; j++) {
	        
	        scanf("%c", &mat[i][j]);
	    }
	}

	//insere nome
	for ( i=0; i<linhas; i++) {
	    
	    for (j=0; j != '\n'; j++) {
	        
	        scanf("%c", &mat[i][j]);
	    }
	}

	return 0;
}