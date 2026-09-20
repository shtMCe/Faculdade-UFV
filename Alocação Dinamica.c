#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
		mat[i] = ( char* ) malloc ( 30 * sizeof(char) );

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

	if (escolha == 1) {

		//insere nome
		for ( i=0; i<linhas; i++) {

			for (j=0; j != '\n'; j++) {

				scanf("%c", &mat[i][j]);
			}
		}
	}
    
    else if (escolha == 2) {
        
        //apaga nome, ref num linha
        int linhaescolhida;
        printf("Entre com o num da linha que deseja excluir: ");
        scanf("%d", &linhaescolhida);
        
        for (i=0; i<linhas; i++) {
            
            if (linhaescolhida == i) {
                free(mat[i]);
            }
        }
    }
    
    else if (escolha == 3) {
        
        //apaga nome, ref nome e substituir
        char nomeescolhido[30];
        char nomenovo[30];
        int loc;
        
        printf("Entre com o nome da linha que deseja excluir: ");
        gets(nomeescolhido);
        
        printf("Entre com o novo nome da linha que deseja inserir: ");
        gets(nomenovo);
        
        for (i=0; i<linhas; i++) {
            
            if (nomeescolhido[i] == mat[i]) {
                free(mat[i]);
                loc = i;
                mat[i] = nomenovo;
            }
        }
        
    }
    
    else if (escolha == 4) {
        
        //apaga nome, ref nome
        char nomeescolhido[30];
        printf("Entre com o nome da linha que deseja excluir: ");
        gets(nomeescolhido);
        
        for (i=0; i<linhas; i++) {
            
            if (nomeescolhido[i] == mat[i]) {
                free(mat[i]);
            }
        }
    }

	return 0;
}