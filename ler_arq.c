/*programa em c que le uma entrada formatada e separa as strings por espaco*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 41

int main(void){
	FILE* arq;
	int i;
	char texto[TAM];
	char texto_formatado[TAM];
	char nome_pagina[TAM];
	char nome_arquivo[TAM];
	char editor[TAM];
	char contribuicao[TAM];
	char insere1[TAM];
	char insere2[TAM];

	arq = fopen("entrada.txt", "r");
	if(arq == NULL){
		printf("Erro na leitura do arquivo.\n");
		exit(1);
	}

	do{
		fscanf(arq, "%s", texto);
		if( strcmp(texto, "INSEREPAGINA") == 0){
			fscanf(arq, "%s %s", nome_pagina, nome_arquivo);
			// printf("nome da pagina: %s\nnome arquivo: %s\n\n", nome_pagina, nome_arquivo);
		}
		else if(strcmp(texto, "RETIRAPAGINA") == 0){
			fscanf(arq, "%s", nome_pagina);
			// printf("nome pagina retirada: %s\n\n", nome_pagina);			
		}
		else if(strcmp(texto, "INSEREEDITOR") == 0){
			fscanf(arq, "%s", editor);
			// printf("insere editor: %s\n", editor);						
		}
		else if(strcmp(texto, "RETIRAEDITOR") == 0){
			fscanf(arq, "%s", editor);
			// printf("\nretira editor: %s\n", editor);												
		}
		else if(strcmp(texto, "INSERECONTRIBUICAO") == 0){
			fscanf(arq, "%s %s %s", nome_pagina, editor, contribuicao);
			// printf("\nnome pagina: %s\nnome editor: %s\ncontribuicao: %s\n", nome_pagina, editor, contribuicao);															
		}
		else if(strcmp(texto, "INSERELINK") == 0){
			fscanf(arq, "%s %s", insere1, insere2);
			// printf("\npagina 1: %s\npagina2: %s\n", insere1, insere2);															
		}
		else if(strcmp(texto, "IMPRIMEPAGINA") == 0){
			fscanf(arq, "%s", nome_pagina);
			// printf("\nnome pagina - imprime pagina: %s\n", nome_pagina);															
		}
		else if(strcmp(texto, "RETIRACONTRIBUICAO") == 0){
			fscanf(arq, "%s %s %s", nome_pagina, editor, nome_arquivo);
			// printf("\nretira contribicao - pagina retirada: %s\neditor retirado: %s\narquivo retirado: %s\n", nome_pagina, editor, nome_arquivo);															
		}
		else if(strcmp(texto, "CAMINHO") == 0){
			fscanf(arq, "%s %s", insere1, insere2);
			// printf("\ncaminho - pagina 1: %s\npagina 2: %s\n", insere1, insere2);															
		}else if(strcmp(texto, "IMPRIMEWIKED") == 0){
			printf("impressao IMPRIMEWIKED !\n");
		}
	}while( strcmp(texto, "FIM") != 0);

	fclose(arq);

	return 0;
}