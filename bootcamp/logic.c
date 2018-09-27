#include <stdio.h>

int main() {
    int a, b;
    
    scanf("%d %d", &a, &b);
    
    printf("%d AND %d is %d\n", a, b, a&&b);
    printf("%d OR %d is %d\n", a, b, a||b);
    
    return 0;
}







/*

Считать с клавиатуры два целых числа.
Вывести результат логических действий И и ИЛИ.

Пример ввода
0 1
Пример вывода
0 AND 1 is 0
0 OR 1 is 1

2. Оператор "И" - &&
Возвращает истину только тогда, когда все выражение объеденные оператором "И" будут истинной
true&&true=true
true&&fasle=false
false&&true=false
false&&fasle=false
3. Оператор "ИЛИ" - ||
Возвращает истину, если хотя бы одно из выражений истина.
true||true=true
true||false=true
false||true=true
false||false=false

*/