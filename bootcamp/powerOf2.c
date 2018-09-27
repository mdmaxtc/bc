#include <stdio.h>

int main() {
    int power = 1;
    int degree;
    
    scanf("%d", &degree);
    
    for ( int i = 0; i < degree; i++ ) {
        printf("%d ", power);
        power *= 2;
    }
    
    printf("%d\n", power);
    
    return 0;
}




/*

Считать с клавиатуры цело0е неотрицательное число. Вывести через пробел степени числа 2 от нулевой до заданной. Использовать цикл.

Пример ввода
3
Пример вывода
1 2 4 8

*/