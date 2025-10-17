#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

/*
10. Print Fibonacci Sequence
    - Input: A number n
    - Output: First n numbers in the Fibonacci sequence
*/
int fibonacciSequence(int t_num) {}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <integer>\n", argv[0]);
        return 1;
    }

    int input = atoi(argv[1]);
    // ...

    return 0;
}
