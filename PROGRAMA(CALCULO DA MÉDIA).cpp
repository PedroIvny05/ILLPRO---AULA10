#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main () {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	float media, n1, n2;
	
	printf("Calcular média do IFCE\n");
	
	printf("Nota da n1: ");
	scanf("%f", &n1);
	
	printf("Nota da n2: ");
	scanf("%f", &n2);
	
	media = (n1*2 + n2*3) / 5;
	
	printf("Media Final: %2.2f", media);
	
	system("pause");
	return 0;
	
}
