#include <stdio.h>
#include <stdlib.h>

/*
Sum of First N Natural Numbers
   - Input: A positive integer n
   - Output: Sum from 1 to n
*/
int sumOfNaturalNumbers(int t_pos_int) {
    int sum = 0;
    for (int i = 1; i <= t_pos_int; ++i) {
        sum += i;
    }

    return sum;
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <integer>\n", argv[0]);
        return 1;
   }

    int input = atoi(argv[1]);
    printf("Sum of natural #s (%d): %d\n", input,
            sumOfNaturalNumbers(input));

    return 0;
}
