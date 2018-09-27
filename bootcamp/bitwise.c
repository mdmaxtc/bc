#include <stdio.h>

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int num1, num2;
    
    fscanf(in, "%d %d", &num1, &num2);
    fclose(in);
    
    fprintf(out, "%d&%d=%d\n", num1, num2, num1&num2);
    fprintf(out, "%d|%d=%d\n", num1, num2, num1|num2);
    fprintf(out, "%d^%d=%d\n", num1, num2, num1^num2);
    fprintf(out, "%d<<%d=%d\n", num1, num2, num1<<num2);
    fprintf(out, "%d>>%d=%d\n", num1, num2, num1>>num2);
    
    fclose(out);
    
    return 0;
}



/*

Считать из task.in два числа.
Записать в task.out результат выполнения различных побитовых операций.

Пример ввода
1 1


1&1=1
1|1=1
1^1=0
1<<1=2
1>>1=0
*/