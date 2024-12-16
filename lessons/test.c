/*#include <stdio.h>

int main() {

    int n, first_half = 0, second_half = 0;  // 123321
    int sum1 = 0, sum2 = 0;
    scanf("%d", &n);
    first_half = n / 1000;
    second_half = n % 1000;
    while (first_half > 0 && second_half > 0) {
        sum1 = sum1 + first_half % 10;
        first_half /= 10;
        sum2 = sum2 + second_half % 10;
        second_half /= 10;
    }

    (sum1 == sum2) ? printf("yes") : printf("no");

    return 0;
}*/

#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    int sum1 = 0, sum2 = 0;
    for (int i = 1; n > 0; n /= 10, i++) {
        if (i <= 3)
            sum1 = sum1 + n % 10;
        else 
            sum2 = sum2 + n % 10;
    }
    (sum1 == sum2) ? printf("yes") : printf("no");
    
    return 0;
}
