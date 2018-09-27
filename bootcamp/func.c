#include <stdio.h>

int profitMy( int a, int b) {
    int interes = 2;
    int tax = 10;

    return (a*b-interes)*9/10;

}

int main() {
    int a, b;

    scanf("%d %d", &a, &b);

    printf("Result of * is %d\n", profitMy(a, b));


    return 0;
}

/*


