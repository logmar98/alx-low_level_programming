#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;
    srand(time(NULL)); // Seed the random number generator with the current time
    
    n = rand() % 201 - 100; // Generates a random number between -100 and 100
    
    printf("The number %d is ", n);
    
    if (n > 0) {
        printf("positive\n"); // If the number is greater than 0, it is positive
    } else if (n == 0) {
        printf("zero\n"); // If the number is equal to 0, it is zero
    } else {
        printf("negative\n"); // If the number is less than 0, it is negative
    }
    
    return 0;
}
