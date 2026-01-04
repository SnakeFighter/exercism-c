#include "difference_of_squares.h"
#include <stdio.h>

unsigned int square_of_sum (unsigned int input) {
    int sum = 0;
    for (unsigned int i = 0; i <= input; i++) {
        sum += i;
        printf("Iter: %d sum: %d\n", i, sum);
    }
    return (sum * sum);
}

unsigned int sum_of_squares(unsigned int input) {
    int sum = 0;
    for (unsigned int i = 0; i <= input; i++) {
        sum = sum + (i*i);
        printf("Iter: %d sum: %d\n", i, sum);
    }
    return (sum);    
}

unsigned int difference_of_squares(unsigned int number) {
    return (-sum_of_squares(number)+square_of_sum(number));
}