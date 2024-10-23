

/*int main() {
	int matr[3][4];
	int cur = 1;
	int i, j;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			matr[i][j] = cur;
			cur++;
		}
	}
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			printf("%5d ", matr[i][j]);

		}
		printf("\n");
	}


	return 0;
}*/


/*
for (initialisaztziya; uslovie; priraszczenie) {
    operator 1;
    operator 2;
}
инициализация выполняется перед началом цикла

условие - параметр при истинности которого цикл выполняется

приращение - то что будет выполняться в конце каждого цикла

while(ycJloBue) {operator1; operator2;}

U,uKJl c nocTycJloBueM do-while

do {
    operator;
} while(ycJloBue)



int mas[100];

functions:

int float char void

type fun(params) {
	telo funkcii
}
list params:
int a, b

*/

/* #include <stdio.h>

int minimum(int x, int y);
void reverse(int number);

int minimum(int x, int y) {
	if (x < y) {
		return x;
	}
	else {
		return y;
	}
}

void reverse(int number) {
	while (number) {
		printf("%d", number % 10);
		number /= 10;
	}
	printf("\n");
}

void swap(int* x, int* y) {

}

int main() {
	int x;
	printf("Vvedite chislo: ");
	scanf_s("%d", &x);
	reverse(x);
	reverse(12345);
	printf("iz 2 i 5 min eto %d \n", minimum(2, 5));
	return 0;
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>


int minimum(int x, int y);
void reverse(int number);
void swap(int* x, int* y);
void stupid_swap(int x, int y);

int fact_iter(int n) {
	int t;
	int answer;
	for (t = answer = 1; t <= n; answer *= t, t++);
	return answer;
}

int fact_rec(int n) {
	if (n == 0) {
		return 1;
	}
	return n * fact_rec(n - 1);
}

int find_min(int* mas, int len);

int minimum(int x, int y) {
	if (x < y) {
		return x;
	}
	else {
		return y;
	}
}

void reverse(int number) {
	while (number) {
		printf("%d", number % 10);
		number /= 10;
	}
	printf("\n");
}

void stupid_swap(int x, int y) {
	int temp;
	printf("x = %d\ny = %d\n", x, y);
	temp = x;
	x = y;
	y = temp;
	printf("x = %d\ny = %d\n\n", x, y);
}

void swap(int* x, int* y) {
	int temp;
	printf("x = %d\ny = %d\n", *x, *y);
	printf("addr x = %p\naddr y = %p\n", x, y);
	temp = *x;
	*x = *y;
	*y = temp;
	printf("x = %d\ny = %d\n\n", *x, *y);
	printf("addr x = %p\naddr y = %p\n", x, y);
}

int find_min(int* mas, int len) {
	int min = mas[0];
	for (int i = 1; i < len; i++) {
		if (mas[i] < min) {
			min = mas[i];
		}
	}
	return min;
}


int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "ru");
	printf("number of params = %d\n", argc);
	printf("program name: %s\n", argv[0]);
	if (argc != 2) {
		printf("Ошибка! укажите имя через пробел после вызова программы\n");
		exit(1);
	}
	else {
		printf("hi, %s\n", argv[1]);
		printf("zzz");
	}
	return 0;
}