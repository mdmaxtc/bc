#include <stdio.h>

int main() {
    int min, max;

    scanf("%d %d", &min, &max);

    min += min % 2;
    max -= max % 2;
    for ( ; min < max; min += 2 ) {
        printf("%d ", min);
    }
    printf("%d\n", max);

    return 0;
}




/* 

Считать с клавиатуры два целых числа.
Вывести в строку все чётные числа в промежутке от первого до второго включительно.
В указанном промежутке гарантировано наличие хотя бы одного числа, подлежащего выводу.

Пример ввода
7 15
Пример вывода
8 10 12 14
*/