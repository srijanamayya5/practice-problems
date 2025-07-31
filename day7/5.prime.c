#include <stdio.h>
#include <math.h> // Required for sqrt()

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) {
        return 0; // 0 and 1 are not prime
    }
    // Check for divisibility from 2 up to the square root of num
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return 0; // Not prime if divisible
        }
    }
    return 1; // Prime if no divisors found
}

int main() {
    int n;
    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    printf("Prime numbers from 2 to %d are: \n", n);
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}