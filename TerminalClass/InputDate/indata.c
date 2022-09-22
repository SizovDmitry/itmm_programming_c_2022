#include <locale.h>
#include <stdio.h>

int main() {

	setlocale(LC_ALL, "rus");

char day, month, year, hour, min, sec;

printf("Введите дату:");

scanf_s("%c.%c.%c", &day, &month, &year);

system("cls");

printf("Введите время:");

scanf_s("%c:%c:%c", &hour, &min, &sec);

system("cls");

printf("Я запомню %c.%c.%c %c:%c\nСпасибо, до свидания!", day, month, year, hour, min);

return 0;
}