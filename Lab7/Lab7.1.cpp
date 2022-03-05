#include<iostream>

//19.Дано целое число m>1. Получить наименьшее целое k, при котором 4^k>m.//

int main()
{
	system("chcp 1251");
	system("cls"); //убирает надпись "Текущая кодовая страница : 1251"
	
	int m = 0;

	while (m <= 1) { printf("Введите число m > 1\n"); scanf_s("%d", &m); }

	int k = 0, a = 1;

	while (a <= m) { k++; a *= 4; }

	printf("Наименьшее целое k = %d", k);

	return 0;
}