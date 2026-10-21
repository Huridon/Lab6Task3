#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");

    char name1[50], name2[50];
    int day1, month1, year1;
    int day2, month2, year2;
    int condition;

    // Сообщаем пользователю, что делает программа
    printf("=== ОПРЕДЕЛЕНИЕ СТАРШЕГО ПО ВОЗРАСТУ ===\n");
    printf("Введите имя и дату рождения двух человек: ");

    // Считываем имена и даты рождения
    scanf("%49s %d %d %d %49s %d %d %d",
        name1, &day1, &month1, &year1,
        name2, &day2, &month2, &year2);

    // Проверяем, кто родился раньше
    condition = (year1 < year2) ||
        (year1 == year2 && month1 < month2) ||
        (year1 == year2 && month1 == month2 && day1 < day2);

    printf("%s\n", condition ? name1 : name2);

    return 0;
}