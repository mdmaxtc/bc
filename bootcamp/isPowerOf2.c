#include <stdio.h>

int powerOf2(int integer) {
    return 1 << integer;
}

int main() {
    int integer;

    scanf("%d", &integer);

    if ( powerOf2(integer)) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
    return 0;
}








/*

Условие задачи
Считать с клавиатуры целое положительное число. Если число является целой степенью двойки, вывести "yes", иначе вывести "no".

Пример ввода
8
Пример вывода
yes

*/