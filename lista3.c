#include <stdio.h>
#include <stdlib.h>

void q1() {
	int v[5];
	printf("Preenchendo o vetor: \n");

	for (int i = 0; i < 5; i++) {
		printf("v[%d] = ", i);
		scanf_s("%d", &v[i]);
	}
	printf("Numeros com valores pares:\n");
	for (int i = 0; i < 5; i++) {
		if (v[i] % 2 == 0) {
			printf("O numero %d na posicao %d e par\n", v[i], i);
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
		if (v[i] > *maior) {
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
	float* vet = (float*)malloc(N * sizeof(float));

	if (vet == NULL) {
		printf("Erro ao alocar memória.\n");
		return;
	}

	printf("Preenchendo o vetor: \n");
	for (int i = 0; i < N; i++) {
		printf("v[%d] = ", i);
		scanf_s("%f", &vet[i]);
	}
	int cont = negativos(vet, N);
	printf("O vetor possui %d numeros negativos\n", cont);

	free(vet);
}

float ponderada(int n, float* v, float* w) {
	float soma_peso = 0.0;
	float soma_ponderada = 0.0;

	for (int i = 0;i < n; i++) {
		soma_peso += v[i] * w[i];
		soma_ponderada += w[i];
	}
	return soma_peso / soma_ponderada;
}

void q6() {
	int n = 3;
	float* v = (float*)malloc(n * sizeof(float));
	float* w = (float*)malloc(n * sizeof(float));
	if (v == NULL || w == NULL) {
		printf("Erro ao alocar memória.\n");
		return;
	}

	printf("Preenchendo o vetor de valores e de pesos:\n");
	for (int i = 0; i < 3; i++) {
		printf("Valores[%d] = ", i);
		scanf_s("%f", &v[i]);
		printf("Peso[%d] = ", i);
		scanf_s("%f", &w[i]);
	}
	float resultado=ponderada(n, v, w);
	
	printf("Media ponderada: %.4f", resultado);

	free(v);
	free(w);
}//Questao de aula : Construir um programa com 3 funcoes : uma pra ler valores, putra pra calcular o somatorio dos valores lidos e outra pra calcula o prosutorio dos valore

//int quantidade() {
//	int q;
//	printf("Entre com a quantidade de valores a ser armazenados no vetor: \n");
//	scanf("%d", &q);
//	return q;
//}
//
//float valores(int q, float* val) {
//	float *somatorio = 0.0;
//	printf("Entre com os valores a serem armazenados no vetor: \n");
//	for (int i = 0;i < q; i++) {
//		scanf("%f", &val[i]);
//		*somatorio += val[i];
//	}
//	return *somatorio;
//}
//
//float produto(int* q) {
//	int *produtorio = 1.0;
//	
//	for (int i = 0;i < q; i++) {
//		*produtorio *= val[i];
//	}
//	return *produtorio;
//
//}
//
//void qa() {
//	printf("Somatorio= %f\n", somatorio);
//	printf("Produtorio\n", produtorio);
//}
//
//int main() {
//	//q1();
//	//q2();
//	//q3();
//	//q4();
//	//q5();
//	//q6();
//	qa();
//
//	return 0;
//}
//
//
//int quantidade() {
//	int q;
//	printf("Entre com a quantidade de valores a ser armazenados no vetor: ");
//	scanf("%d", &q);
//	return q;
//}
//
//float valores(int q, float* val) {
//	float somatorio = 0.0;
//	printf("Entre com os valores a serem armazenados no vetor:\n");
//	for (int i = 0; i < q; i++) {
//		scanf("%f", &val[i]);
//		somatorio += val[i];
//	}
//	return somatorio;
//}
//
//float produto(int q, float* val) {
//	float produtorio = 1.0;
//	for (int i = 0; i < q; i++) {
//		produtorio *= val[i];
//	}
//	return produtorio;
//}
//
//void qa(float somatorio, float produtorio) {
//	printf("Somatório = %.2f\n", somatorio);
//	printf("Produtório = %.2f\n", produtorio);
//}
//
//int main() {
//	int q = quantidade();
//	float* val = (float*)malloc(q * sizeof(float));
//
//	if (val == NULL) {
//		printf("Erro de alocação de memória!\n");
//		return 1;
//	}
//
//	float soma = valores(q, val);
//	float prod = produto(q, val);
//
//	qa(soma, prod);
//
//	free(val);
//	return 0;
//}
