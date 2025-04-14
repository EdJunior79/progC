#include <stdio.h>
#include <stdlib.h>

void captura_valores(int n, float* v ) {
	printf("Entre com os valores a serem armazenados no vetor:\n");
	for (i=0,i<n,i+=1) {
		scanf_s("%f", &v[i]);
	}
}

float calcula_somatorio(int n, float* v) {
	float soma = 0.0f;
	for (int i = 0, i < n; i += 1) {
		soma += v[i];
	}
	return soma
}



int main() {
	int n;
	printf("Entre com a quantidade de valores a ser armazenados no vetor: ");
	scanf_s("%d", &n);
	float* v = (float*)malloc(n * sizeof(float));
	if (v == NULL) {
		printf("Memoria insfuciente. \n");
		exit(1);
	}
	captura_valores(n, v);
	float s = captura_valores(n, v);
	float p = captura_valores(n, v);
	free(v);
	printf("Somatorio: %f\n", s);
	printf("Produtorio: %f\n", p);
	return 0;
}
