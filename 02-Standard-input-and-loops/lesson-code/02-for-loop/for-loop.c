﻿/*
Устройство цикла for:
for (A; B; C) {
    D
}
A -- инструкции инициализации, выполняются единожды при входе в цикл
B -- проверочное выражение, проверяется на истинность перед каждой итерацией
C -- "шаг", инструкции выполняющиеся в конце каждой итерации
D -- тело цикла
*/

#include <stdio.h>

int main(void) {
    int number;
    printf_s("Enter a positive integer: ");
    scanf_s("%d", &number);
    if (number <= 0) {
        printf_s("ERROR: wrong input, exit with code 1\n");
        return 1;
    }

    // вывод чисел от 1 до `number`:
    for (int i = 1; i <= number; i = i + 1) {
        printf_s("%d ", i);
    }
    printf_s("%c", '\n'); // управляющая последовательность символов фактически является одним символом

    // циклы могут быть вложенными:
    for (; number > 0; number -= 1) { // (number -= 1) <-> (number = number - 1)
        for (int j = 0; j < number; j += 1) {
            printf_s("%d ", j);
        }
        printf_s("\n");
    }

    system("pause");
    return 0;
}