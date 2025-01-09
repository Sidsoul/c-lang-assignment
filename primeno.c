#include <stdio.h>

int main() {
    int num, i, isPrime = 1;  // Assume the number is prime initially

    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle the case where num is less than or equal to 1
    if (num <= 1) {
        isPrime = 0;  // Numbers less than or equal to 1 are not prime
    }

    // Check divisibility from 2 to num-1
    for (i = 2; i < num; i++) {
        if (num % i == 0) {
            isPrime = 0;  // Found a divisor, so num is not prime
            break;        // Exit the loop early
        }
    }

    // Output the result
    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
