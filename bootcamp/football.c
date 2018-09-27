#include <stdio.h>

int main() {
    int goal1, goal2;
    
    scanf("%d %d", &goal1, &goal2);
    
    if ( goal1 > goal2 ) {
        printf("Home team wins\n");
    } else if ( goal1 < goal2 ) {
        printf("Away team wins\n");
    } else {
        printf("Draw\n");
    }
    
    return 0;
}

homeTeam
awayTeam

/*

Условие задачи
Считать с клавиатуры 2 целых положительных числа, количество забитых голов хозяевами и гостями на футбольном матче. 
Вывести на экран результат матча «Home team wins», «Away team wins», «Draw».

Пример ввода
7 0
Пример вывода
Home team wins

*/