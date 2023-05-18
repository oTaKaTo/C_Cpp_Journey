#include <stdio.h>
int main() {
    double n, reversed = 0, remainder, original;
    
    scanf("%lf", &n);
    original = n;

    // reversed integer is stored in reversed variable
    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    // palindrome if orignal and reversed are equal
    if (original == reversed)
        printf("%lf is PALINDROME", original);
    else
        printf("%lf is NOT PALINDROME", original);

    return 0;
}