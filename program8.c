#include <stdio.h>

int main() {
    printf("VISHNU BAJPAI \n SECTION B\n");
  int m, h, remaining;
    // where m stands for minutes
    // h stands for hours
    
    printf("Enter the number of m: ");
    scanf("%d", &m);
    h= m / 60;
    remaining = m % 60;

    printf("%d:%d.\n", h, remaining);

    return 0;
}