#include <math.h>
#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "rus");

	int a, h;
	float S;

	printf("������� ���������:\n");
	scanf_s("%d", &a);
	printf("������� ������:\n");
	scanf_s("%d", &h);

	S = a * h * 0.5;

	printf("S = %.2f\n", S);

	system("pause");

	return 0;
}