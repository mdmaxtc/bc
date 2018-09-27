#include <stdio.h>

int maxDivisor(int number) {
    for ( int i = number / 2; i > 1; i-- ) {
        if ( number % i == 0 ) {
            return i;
        }
    }
    return 0;
}

int main() {
    int number;
    
    scanf("%d", &number);
    printf("%d\n", maxDivisor(number));
}






/*

Условие задачи
Считать с клавиатуры целое положительное число. Вывести на экран наибольший его нетривиальный делитель. В случае неопределенности вывести 0.

Пример ввода
12
Пример вывода
6

*/