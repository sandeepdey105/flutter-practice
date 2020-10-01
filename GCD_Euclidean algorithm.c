#include <stdio.h>
#include<time.h>

int gcd_algorithm(int x, int y)
{
    if (y == 0) {
        return x;
    } else if (x >= y && y > 0) {
        return gcd_algorithm(y, (x % y));
    }
}
 
int main(void)
{
    int num1, num2, gcd;
    clock_t start,end;
    printf("\nEnter two numbers to find gcd using Euclidean algorithm: ");
    scanf("%d%d", &num1, &num2);
     start=clock();
    gcd = gcd_algorithm(num1, num2); 
    if (gcd)
        printf("\nThe GCD of %d and %d is %d\n", num1, num2, gcd);
    else
        printf("\nInvalid input!!!\n");
    end=clock();    
    
    double time_taken=(((double)(end-start))/CLOCKS_PER_SEC);
    
    printf("This program takes %f seconds to execu\n",time_taken);

    return 0;
}