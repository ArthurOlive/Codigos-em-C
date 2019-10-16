#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int cont; 
	char frase [100];
	char ch;
	int i, j, quantP, quantL, rep;
	char * palavra;
	char ** spinFrase;
	FILE * arq;
	
	printf("Digite a frase: ");
	fgets(frase, 100, stdin);
	
	printf("Frase: %s\n", frase);
	printf("Quantidade de letras = %d\n", strlen(frase));
	
	//====================== Cria a matriz dinamica =============================
	//Conta a quantidade de palavras 
	quantP = 0;
	for(i = 0; i < strlen(frase); i++){
		if(frase[i] == ' ' || frase[i] == '\n' ) {
			quantP ++;
		}
	}
	
	//alocar a memoria para ter o numero de ponteiros no vetor da frase
	spinFrase = (char **) malloc( quantP * sizeof(char *));
	
	
	quantP = 0;
	for(i = 0; i < strlen(frase); i++){
		if(frase[i] != ' ' && (frase[i] >= 'a' && frase[i] <= 'z')) {
			quantL ++;
		} else if (frase[i] == ' ' || frase[i] == '\n') {
			palavra = (char *) malloc((quantL + 1) * sizeof(char)); //cria a palavra
			spinFrase[quantP] = palavra;
			quantP ++;
			quantL = 0;
		}
	}	
	//===========================================================================
	
	quantP = 0;
	quantL = 0;
	for(i = 0; i < strlen(frase); i ++){
		if (frase[i] != ' ' && (frase[i] >= 'a' && frase[i] <= 'z')){
			spinFrase[quantP][quantL] = frase[i];
			quantL ++;
		} else if (frase[i] == ' ' || frase[i] == '\n') {
			spinFrase[quantP][quantL] = '\0'; //para indicar o fim da palavra 
			quantP ++;
			quantL = 0;
		}
	} 
	
	printf("\nQuantidade de palavras %d.\n", quantP);
		
	//printa na tela:
	FILE * file;
	file = fopen("contador.tsv", "w");
	if (arq == NULL){
		printf("Erro");
		return 1;
	}
	for (i = 0; i < quantP; i ++){
		rep = 0;
		for (j = 0; j < quantP; j ++){
			if (!strcmp(spinFrase[i], spinFrase[j]) && j >= i){
				rep ++;
			} else if (!strcmp(spinFrase[i], spinFrase[j]) && j < i){
				rep = 0; //resetar a quantidade da contagem
				j = quantP; //encerra o loop
			}
		}
		if (rep){
			printf("%s = %d   ", spinFrase[i], rep);
			fprintf(file, "%s\t%d\n",spinFrase[i], rep);
		}
	}
	fclose(file);	
	printf("\n");
	
	//limpa a memoria 
	for (i = 0; i < quantP; i ++){
		free(spinFrase[i]); //limpa as palavras da memoria 
	}
	free(spinFrase);
	system("pause");
	return 0;
}
