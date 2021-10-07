﻿#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_WIDTH 10
#define ARRAY_HEIGHT 5

void printStaticArray(int [ARRAY_HEIGHT][ARRAY_WIDTH]);

int main(void) {
    srand((unsigned)time(NULL));
    // СТАТИЧЕСКИЕ МАССИВЫ

    // создадим двумерный массив и заполним ячейки соответствующими им номерами
    int staticArr[ARRAY_HEIGHT][ARRAY_WIDTH]; // объявление двумерного массива
    for (int i = 0; i < ARRAY_HEIGHT; ++i) { // "итерирование по строкам"
        for (int j = 0; j < ARRAY_WIDTH; ++j) { // "итерирование по элементам в строке"
            staticArr[i][j] = i * ARRAY_WIDTH + j + 1; // записываем номер текущей ячейки массива
        }
    }
    printf_s("arr[%d][%d]:\n", ARRAY_HEIGHT, ARRAY_WIDTH);
    printStaticArray(staticArr);

    // инициализация двумерного массива:
    int primeNumbers[3][3] = { {2, 3, 5}, {7, 11, 13}, {17, 19, 23} };
    printf_s("initialized array primeNumbers:\n");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf_s("%d\t", primeNumbers[i][j]);
        }
        printf_s("\n");
    }

    system("pause");
    return 0;
}

void printStaticArray(int arr[ARRAY_HEIGHT][ARRAY_WIDTH]) {
    for (int i = 0; i < ARRAY_HEIGHT; ++i) {
        for (int j = 0; j < ARRAY_WIDTH; ++j) {
            printf_s("%d\t", arr[i][j]);
        }
        printf_s("\n");
    }
}
