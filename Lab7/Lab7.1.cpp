#include<iostream>

//19.���� ����� ����� m>1. �������� ���������� ����� k, ��� ������� 4^k>m.//

int main()
{
	system("chcp 1251");
	system("cls"); //������� ������� "������� ������� �������� : 1251"
	
	int m = 0;

	while (m <= 1) { printf("������� ����� m > 1\n"); scanf_s("%d", &m); }

	int k = 0, a = 1;

	while (a <= m) { k++; a *= 4; }

	printf("���������� ����� k = %d", k);

	return 0;
}