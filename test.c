#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) {
        printf("Error");
    }
    int reverseNumber = 0, copyNumber = n;
    while (n != 0) {
        int lastDigit = n % 10;
        reverseNumber = reverseNumber * 10 + lastDigit;
        n /= 10;
    }
    // (copyNumber == reverseNumber) ? printf("Yes") : printf("No");
    if (copyNumber == reverseNumber) printf("Yes");
    else printf("No");
    printf("\n");
    return 0;
}