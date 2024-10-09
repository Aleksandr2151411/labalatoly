#include <stdio.h>


void reverse(int number) {
	while (number){
		printf("%d", number % 10);
		number /= 10;
	}
	printf("\n");
}

int main() {
	int x;
	printf("Vvedite chislo: ");
	scanf("%d", &x);
	reverse(x);
	reverse(12345);
	return 0;
}