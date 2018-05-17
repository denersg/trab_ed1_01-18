#include <stdlib.h>
#include <stdio.h>
// #include "trabED1.h"
#include <string.h>
#define TAM 50

// void le_comando(char* comando, char* linha){
// 	int i;
// 	printf("Linha na funcao: %s\n\n", linha);
//
// 	if(comando == "INSEREPAGINA"){
// 		char* pag;
// 		char* arq_pag;
//
// 		while(scanf("%[^\n]s", linha) == ))
// 		while(linha[i] != ' '){
// 			//TENTAR COLOCAR CADA PARAMETRO NUMA VARIAVEL.
// 		}
// 	}
// }

int main(){
	FILE* arq;
	char ch;
	char texto[50];
	char texto_formatado[50];
	int i = 0;
	int cont = 0;

	// char* texto = malloc(TAM);
	// char* texto_formatado = malloc(TAM);
	char nome_arq[TAM];
    char nome[TAM];



	arq = fopen("entrada.txt", "r");
	if(arq == NULL){
		printf("Erro na leitura do arquivo.\n");
		exit(1);
	}

	// fscanf(arq, "%s", texto_formatado);
	do{
		fscanf(arq,"%s", texto);
		// printf("texto lido: %s\n", texto);
            if( (strcmp(texto,"INSEREPAGINA")) == 0){
				fscanf(arq, "%s %s", nome, nome_arq);
				printf("Nome pagina:%s\nNomedo arquivo:%s\n\n", nome, nome_arq);

                // printf("achei %d insere pagina!\n\n", i+1);
				// i++;
            }
	}while((strcmp(texto, "FIM")) != 0);

	fclose(arq);

	// printf("numero de linhas do arquivo: %d\n", cont);

    return 0;
}










































// int main(){
//     int i;
//     char comando[40];
//     char parame[40];
//     FILE *arq;
//
//     arq = fopen("entrada.txt", "rt");
//
//     if(arq == NULL){
//         printf("Problemas na leitura do arquivo!\n");
//         exit(0);
//     }
//     int result;
//     // result = fscanf(arq, "%[^\n]s", comando);
//     while(!feof(arq)){
//         fscanf(arq, "%s", comando);
//         printf("%s\n", comando);
//     }
//     fclose(arq);
//     // fscanf(arq, "%s" "%s", comando, parame);
//     // printf("%s        %s\n", comando, parame);
//
//     // Lista* lst;
//     // lst = inilista_pagina();
//     //
//     // Edit* pedro = cria_contribuicao(...);
//
//
//
//
//
//
//     // printf("Digite o comando:\n");
//     // scanf("%s", linha_com);
//     // printf("%s\n", linha_com);
//
//
//     return 0;
// }


// https://pt.stackoverflow.com/questions/217293/leitura-de-arquivo
//
// https://www.inf.pucrs.br/~pinho/LaproI/Arquivos/Arquivos.htm
//
// https://forum.imasters.com.br/topic/522880-ler-determinada-linha-de-um-arquivo/
//
// http://mtm.ufsc.br/~azeredo/cursoC/aulas/c960.html#c963
