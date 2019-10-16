#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int somaAB(int a, int b){	
	int sum;
	if (b > a && b != a){
		for (; a <= b; a ++){
			sum += a;
		}
	} else if (b != a){
		for(; a >= b; a --){
			sum += a;
		}
	} else {
		sum = a;
	}
	return sum;
}

int somaRecAB(int a, int b){
	int sum;
	if (a == b){
		return b;
	} else {
		sum = a + somaRecAB(a + 1, b);
		return sum;
	}
}
int main(){
	int a, b; 
	clock_t tempo1, tempo2;
		
	printf("Digite o primeiro numero do intervalo: ");
	scanf("%d", &a);
	printf("Digite o segundo numero do intervalo: ");
	scanf("%d", &b);

	tempo1 = clock();
	printf("soma : %d\n", somaAB(a, b));
	tempo1 = clock();
	tempo2 = clock();
	printf("soma : %d\n", somaRecAB(a, b));
	tempo2 = clock();
	printf("tempo: %lf ms\n", (double) tempo1 );

	printf("tempo: %lf ms\n", (double) tempo2 );
	
	//O algoritmo mais rapido � o de estrutura de repeti��o, o motivo disso esta no fato da aoloca��o de memoria para uma variavel x para cada repeti��o
	//do loop recursivo, enquanto no de estrutura de repeti��o a aloca��o � realizada apenas uma unica vez, outro fator que o deixa mais lento � os testes 
	//sussecivos que ele faz, tem um if dentro da estrutura da recursividade, o que siginifica que a complexidade ele � um pouco maior do que O^n pelo fato desse if 
	system("pause");
	return 0;
}
