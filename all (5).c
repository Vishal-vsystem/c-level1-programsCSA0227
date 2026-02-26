#include <stdio.h>

int main() {
    int n=1 ;
    int c=0;
    int limit;
    int sum = 0;
    printf("Enter the number:");
    scanf("%d", & limit);
    while (n <= limit) {
        if (n % 5 == 0) {
            c++;
            sum += n;
            
        }
        n++;
    }
    printf("The sum is = %d\n", sum);
    printf("the total count is = %d\n",c);
}