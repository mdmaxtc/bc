#include <stdio.h>

int main() {
    int even, base;
    int power = 1;
    
    scanf("%d %d", &even, &base);
    
    if ( base == 10 ) {
        printf("%d\n", even);
    } else {
        for ( int reminder = even; reminder >= base; reminder /= base ) {
            power *= base;
        }
        for ( int times = 0; power >= base; power /= base ) {
            times = even / power;
            even -= times * power;
            printf("%d", times);
        }
        printf("%d\n", even/power);
    }
    
    return 0;
}




/*

Считать с клавиатуры целое неотрицательное число в десятичной системе счисления и основание новой системы счисления (целое число от 2 до 10).
Вывести в консоль число, записанное в новой системе счисления.
Задача решается без массивов.

Пример ввода
8 3
Пример вывода
22

*/