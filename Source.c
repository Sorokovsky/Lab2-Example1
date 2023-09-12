#include <stdio.h>
#include <conio.h>
int main(void)
{
	int i, n; // Числа які будуть вводитися
	int j = 0; // Число задане програмою
	printf("\n \t Enter the primary natural number: ");
	scanf_s("%d", &i); // Введення першого числа
	printf("\t Enter the last natural number: ");
	scanf_s("%d", &n); // Введення другого числа
	printf("\n \t The numbers are: ");
	while (i <= n) {
		printf("\n \t%3d", i); // Вивід через цикл
		++i;
		++j;
	}
	printf("\n \t Total numbers: %d \n", j);
	printf("\n Press any key: ");
	_getch();
	return 0;
}