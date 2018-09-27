#include <stdio.h>

int main() {
    int numeral;
    
    scanf("%d", &numeral);
    
    if ( numeral > 0 ) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
    
    return 0;
}




/*

Условие задачи
Считать с клавиатуры число. Если число положительное, вывести на экран «yes», иначе вывести «no».

Пример ввода
-20
Пример вывода
no

*/