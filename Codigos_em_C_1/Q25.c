#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
	//basicamente o malloc aloca um peda�o de memoria dinamica
	//a fun��o free libera o espaco alocado
	//� necessario que o vetor seja um ponteiro.
	
	int * vect;
	int tam, i;
	
	printf("Digite o tamanho do vetor: ");
	scanf("%d", &tam);
	
	vect = (int *) malloc(tam * sizeof(int));
	
	//leitura
	for(i = 0; i < tam; i++){
		printf("Digite um valor: ");
		scanf("%d", &vect[i]);
	}
	
	//exibi��o
	for(i = 0; i < tam; i++){
		printf("%d ", vect[i]);
	}
	
	printf("\n");//limpa o espaco alocado	
	
	system("pause");
	return 0;
}
