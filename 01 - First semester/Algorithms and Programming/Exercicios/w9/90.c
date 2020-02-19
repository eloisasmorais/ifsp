#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main() {
  setlocale(LC_ALL, "Portuguese");
	srand(time(0));
	int num[100];

	for (int i = 0; i < 100; i++) {
		num[i] = rand() % 100;
		if (num[i] % 2 == 0) {
			num[i] *= 3;
		} 
	}

	for (int i = 0; i < 100; i++) {
		printf("%d ", num[i]);
	}

	printf("\n");

	return 0;
}