/* Programming Exercise 7-9 */

/*
    Write a program that accepts a positive integer as input and then displays all the prime
    numbers smaller than or equal to that number.

    Please enter a positive integer:
    65
    All the prime numbers that smaller than or equal to 65 are:
    2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 

    Please enter a positive integer:
    120
    All the prime numbers that smaller than or equal to 120 are:
    2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97 101 103 107 109 113
*/

#include<stdio.h>
#include<math.h>

int isprime(int i);

int main(void) {

    int num;
    printf("Please enter a positive integer: ");
    scanf("%d", &num);

    printf("All the prime numbers that smaller than or equal to %d are: \n", num);
    for (int i = 1; i <= num; i++) {
        if (isprime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}

int isprime(int i) {
    // check if sqrt of i is an integer
    // if is an integer -> NOT prime
    double n = sqrt((double)i);
    int x = n;
    double e = n - x;

    if (e > 0) {
        // check if i can be divided by any integers up till sqrt(i)
        for (int j = 2; j <= x; j++) {
            if (i % j == 0) {
                return 0;
            }
        }
    } else {
        return 0;
    }
    return 1;
}
