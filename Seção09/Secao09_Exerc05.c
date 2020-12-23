#include <stdio.h>
#include <math.h>
#define PI 3.1415

float volume(float n);

int main(){
	float r;

	printf("Informe o valor do raio: ");
	scanf("%f", &r);

	printf("O volume e %2.f.\n", volume(r));
	return 0;
}

float volume(float n){
	float vol;

	vol = (4/3)*PI*pow(n,3);

	return vol;
}
