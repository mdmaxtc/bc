#include <stdio.h>

int main() {
    int discriminant;

    scanf("%d", &discriminant);

    if ( discriminant < 0 ) {
        printf("0\n");
    } else if ( discriminant == 0 ) {
        printf("1\n");
    } else {
        printf("2\n");
    }

    return 0;
}
/*

Условие задачи
Считать с клавиатуры целое число - дискриминант квадратного уравнения. Вывести на экран число разных корней этого уравнения.

Пример ввода
-20
Пример вывода
0


Если D < 0, то уравнение не имеет корней.

Если D = 0, то уравнение имеет один корень.

Если D > 0, то уравнение имеет два корня
*/