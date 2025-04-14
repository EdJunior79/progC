#include <stdio.h>
#include <stdlib.h>

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
