int factorial(int n) {

    if ( n > 1 ) {
        return factorial(n-1) * n;
    }
    if ( n < 0 ) {
        return -1;
    }
    return 1;
}

/*
Условие задачи
int factorial(int n)
Использовать рекурсию.
В случае неопределенности возвращать -1.

*/