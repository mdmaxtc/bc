#include <stdio.h>

int main() {
    int a, b;
    
    scanf("%d %d", &a, &b);

    if ( a > b && b > 0 ) {
        printf("alpha\n");
    } else if ( a < 0 && b == 0 ) {
        printf("bravo\n");
    } else if ( a == 0 || b == 0) {
        printf("charlie\n");
    } else {
        printf("zulu\n");
    }

    return 0;
}









/*
Считать с клавиатуры два целых числа.
Программа должна произвести только одну из следующих операций:
- Если первое число больше второго и второе число больше нуля, вывести alpha
- Если первое число меньше нуля и второе число равно нулю, вывести bravo
- Если любое из чисел равно нулю, вывести charlie
- Если не сработало ничего из вышеуказанного, вывести zulu


*/