#include <stdio.h>

int main() {
    int total;
    int counter;
    
    scanf("%d", &total);

    counter = (total * total - total)/2 - 1;
    for ( int row = total; row > 0; row-- ) {
        for ( int column = 1; column < row; column++ ) {
            counter += 1;
            printf("%d ", counter);
        }
        counter += 1;
        printf("%d\n", counter);
    }

    return 0;
}


/*

Вывести числовую пирамидку на total строк. Порядок строк – обратный.
В первой строке стоит число 1. В последующих строках стоят увеличивающиеся числа через пробел.

Пример ввода
3
Пример вывода
4 5 6
2 3
1

*/