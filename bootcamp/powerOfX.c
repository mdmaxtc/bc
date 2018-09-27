#include <stdio.h>

int main() {
    int power = 1;
    int base;
    int degree;
    
    scanf("%d %d", &base, &degree);
    
    for ( int i = 0; i < degree; i++ ) {
        printf("%d ", power);
        power *= base;
    }
    printf("%d\n", power);
    
    return 0;
}


/*

Считать с клавиатуры целое основание и целый неотрицательный показатель. Вывести через пробел степени числа основания от нулевой до заданной.

Пример ввода
2 3
Пример вывода
1 2 4 8

*/