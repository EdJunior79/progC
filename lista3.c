#include <stdio.h>
#include <stdlib.h>

void q1(){
	int v[5];
	printf("Preenchendo o vetor: \n");

	for(int i = 0; i < 5; i++){
		printf("v[%d] = ", i);
		scanf_s("%d", &v[i]);
	}
	printf("Numeros com valores pares:\n");
	for (int i = 0; i < 5; i++) {
		if (v[i] % 2 == 0) {
			printf("O numero %d na posicao %d e par\n",v[i],i);
		}
	}
}

void q2() {
	int v[5] = { 0, 1, 2, 3, 4 };int* ptr_v = v;

	printf("Entrada: 0, 1, 2, 3, 4");

	for (int i = 0; i < 5; i++) {
		ptr_v[i] = ptr_v[i] + 1;

	printf("\nSaida:\n");
		for (int i = 0; i < 5; i++) {
			printf("ptr_v + %d = %d\n", i, ptr_v[i]);
		}
	}
}

void q3() {
	int v[5];
	int* ptr_v = v;
	printf("Preenchendo o vetor: \n");

	for (int i = 0; i < 5; i++) {
		printf("*(v + %d) = ", i);
		scanf_s("%d", &ptr_v[i]);
	}
	printf("Imprimindo o dobro:\n");
	for (int i = 0; i < 5; i++) {
		printf("2 x *(v + %d) = %d\n", i, ptr_v[i] * 2);



	}
}

void q4() {
	int v[] = { 5, 2, 15, 3, 7, 15, 8, 6, 15 };
	int* maior = &v[0];
	int igual = 1;

	for (int i = 1; i < 9; i++) {
		if (v[i] > *maior){
			maior = &v[i];
			igual = 1;
		}
		else if (v[i] == *maior) {
			igual++;
		}

	}
	printf("Maior elemento do vetor: %d", *maior);
	printf("\nQuantidade de vezes que %d aparece no vetor: %d\n", *maior, igual);
}

int negativos(float* vet, int N) {
	int contador = 0;
	
	for (int i = 0;i < N; i++) {
		if (vet[i] < 0) {
			contador++;
		}
	}
	return contador;
}

void q5() {
	int N = 7;
	float *vet = (float*) malloc(N * sizeof(float));
	
	if (vet == NULL) {
		printf("Erro ao alocar memória.\n");
		return;
	}

	printf("Preenchendo o vetor: \n");
	for (int i = 0; i < N; i++) {
		printf("v[%d] = ",i);
		scanf_s("%f", &vet[i]);
	}
	int cont = negativos(vet, N);
	printf("O vetor possui %d numeros negativos\n", cont);

	free(vet);
}


int main(){
	//q1();
	//q2();
	//q3();
	//q4();
	q5();

	return 0;
}
