#include <stdio.h>
#include <stdlib.h>

//Quest�o 04
int main(){
	int n1; 
	int n2;
	int add;
	int sub;
	float div;
	int mul;
	int modd;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &n1);
	printf("Digite o primeiro numero: ");
	scanf("%d", &n2);
	
	//Adi��o
	add = n1 + n2;
	printf("Adicao: %d \n", add);
	//Subtra��o
	sub = n1 - n2;
	printf("Subtracao: %d \n", sub);
	//Divis�o 
	if (n2 != 0){
		div = (float) n1/n2;
		printf("Divisao: %.3f \n", div);
	} else {
		printf("Erro: Divisao por 0\n");
	}
	//Multiplica��o
	mul = n1 * n2;
	printf("Multiplicacao: %d \n", mul);
	//Modus
	if (n2 != 0){
		modd = n1 % n2;
		printf("Modus: %d \n", modd);
	} else {
		printf("Erro: Divisao por 0\n");
	}
	
		
	system("pause");
	return 0;
}
