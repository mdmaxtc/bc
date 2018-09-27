#include <stdio.h>

int main() {
    int min, max, modulo;
    
    scanf("%d %d", &min, &max);
    
    modulo = min % 5;
    if ( modulo > 0 ) {
        min += 5 - modulo;
    } else {
        min -= modulo;
    }
    for ( int i = min; i <= max; i += 5 ) {
        printf("%d\n", i);
    }
    
    return 0;
}








/*

 Считать min, max. Вывести в столбик кратные пяти числа от min до max включительно.

Пример ввода
0 15
Пример вывода
0
5
10
15

*/