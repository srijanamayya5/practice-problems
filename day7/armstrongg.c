#include <stdio.h>

int main() {
    int num, temp, remainder, numDigits = 0, sum = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    temp = number; 

    // Count the number of digits
    int tempNum = temp;
    while (tempNum != 0) {
        tempNum /= 10;
        numDigits++;
    }

    tempNum = temp;
    while (tempNum != 0) {
        remainder = tempNum % 10;
        
        int power = 1;
        for (int i = 0; i < numDigits; i++) {
            power *= remainder;
        }
        sum += power;
        tempNum /= 10;
    }

    if (sum == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}
