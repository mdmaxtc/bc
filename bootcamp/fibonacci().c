int fibonacci(int n) {
    if ( n > 1 ) {
        return fibonacci(n-1) + fibonacci(n-2);
    }
    if ( n < 0 ) {
        return fibonacci(n+2) - fibonacci(n+1);
    }
    return n;
}

/*


int fibonacci(int n)
Использовать рекурсию.


*/