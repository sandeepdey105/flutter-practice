#include<stdio.h>
#include<time.h>
int isPrime(int n, int i)
{
    if(i == 1)
        return 1;   
    else
    {
        if(n%i == 0)
            return 0;
        else
            isPrime(n, i-1);
    }
}

int main()
{
    int num, prime;
     clock_t start,end;
     
    printf("Enter a positive number to check if Prime: ");
    scanf("%d", &num);
      start=clock();
     isPrime(num, num/2);
      end=clock();
      prime = isPrime(num, num/2);
    if(prime == 1)
    {
        printf("\n%d is a prime number", num);
    }
    else
    {
        printf("\n%d is a Composite number", num);
    }
    
    double time_taken=(((double)(end-start))/CLOCKS_PER_SEC);
    
    printf("\nThis program takes %f seconds to execute \n",time_taken);
    return 0;
}


