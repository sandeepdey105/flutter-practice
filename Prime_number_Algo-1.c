
#include<stdio.h>
#include<time.h>
void prime_no(int n)
{
    int i, flag=0;
    for (i=2;i<n;i++)
    {
        if (n%i==0)
        {
            printf("The number is not prime\n");
            flag=1;
            break;
        }
    }
    if (flag==0)
        printf(" The number is prime\n");
}

int main()
{
    int n;
    for(int i=0;i<10;i++)
    {

    printf("Enter the value of n\n");
    scanf("%d", &n);

    clock_t start,end;

    start=clock();
    prime_no(n);
    end=clock();

    double time_taken=(((double)(end-start))/CLOCKS_PER_SEC);
    
    printf("This program takes %f seconds to execu\n",time_taken);

    }
    return 0;


    }