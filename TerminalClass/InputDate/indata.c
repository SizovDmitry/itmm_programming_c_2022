#include <locale.h>
#include <stdio.h>

int main() {

	setlocale(LC_ALL, "rus");

char day, month, year, hour, min, sec;

printf("������� ����:");

scanf_s("%c.%c.%c", &day, &month, &year);

system("cls");

printf("������� �����:");

scanf_s("%c:%c:%c", &hour, &min, &sec);

system("cls");

printf("� ������� %c.%c.%c %c:%c\n�������, �� ��������!", day, month, year, hour, min);

return 0;
}