#include <stdio.h>
#include <math.h>

float distancia(const* Ponto p1, const* Ponto p2) {
	float distancia = sqrt((pow((p1.x - p2.x), 2)) + (pow((p1.x - p2.x), 2)))

	return distancia;

}

void q1() {
	typedef struct ponto Ponto;
	struct Ponto {
		float x;
		float y;
	};
	
	float Ponto p1, Ponto p2;
	

	printf("Qual o x e y do 1o ponto: ");
	scanf_s("%f %f",&p1.x, &p1.y );
	printf("Qual o x e y do 2o ponto: ");
	scanf_s("%f %f", &p2.x, &p2.y);

	ditancia()
}



void main() {


	return 0;
}

typedef struct {
	float x;
	float y;
} Ponto;

// 2. Corrigindo a fun��o de dist�ncia
float distancia(const Ponto* p1, const Ponto* p2) {
	float d = sqrt(pow(p1->x - p2->x, 2) + pow(p1->y - p2->y, 2));
	return d;
}

// 3. Corrigindo fun��o q1
void q1() {
	Ponto p1, p2;

	printf("Qual o x e y do 1o ponto: ");
	scanf("%f %f", &p1.x, &p1.y);  // scanf_s s� no Visual Studio com seguran�a
	printf("Qual o x e y do 2o ponto: ");
	scanf("%f %f", &p2.x, &p2.y);

	float d = distancia(&p1, &p2);
	printf("Dist�ncia entre os pontos: %.2f\n", d);
}

int main() {
	q1();  // chamando a fun��o
	return 0;
}