#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<stdbool.h>

bool prime_alpha(int n)
{
    for(int i=n;i>1;i--)
    {
        if(n%i==0) return false;
    }
    return true;
}

bool prime_beta(int n)
{
    if (n <= 1)  return false; 
    if (n <= 3)  return true; 

    if (n%2 == 0 || n%3 == 0) return false; 
  
    for (int i=5; i*i<=n; i=i+6) 
        if (n%i == 0 || n%(i+2) == 0) 
           return false; 
  
    return true; 
}

int power(int x, unsigned int y, int p) 
{ 
    int res = 1;      
    x = x % p; 
                
    while (y > 0) 
    { 
        if (y & 1) 
            res = (res*x) % p; 

        y = y>>1;
        x = (x*x) % p; 
    } 
    return res; 
} 

bool miillerTest(int d, int n) 
{ 
    int a = 2 + rand() % (n - 4); 
    int x = power(a, d, n); 
  
    if (x == 1  || x == n-1) 
       return true; 
  
    while (d != n-1) 
    { 
        x = (x * x) % n; 
        d *= 2; 
  
        if (x == 1)      return false; 
        if (x == n-1)    return true; 
    } 

    return false; 
} 
bool prime_gamma(int n)
{
    if (n <= 1 || n == 4)  return false; 
    if (n <= 3) return true; 

    int d = n - 1; 
    while (d % 2 == 0) 
        d /= 2; 
  
    int k= 30;
    for (int i = 0; i < k; i++) 
         if (!miillerTest(d, n)) 
              return false; 
  
    return true; 
}

double time_alpha(int a)
{
    clock_t start,end;
    start=clock();
    prime_alpha(a);
    end=clock();
    double time=(((double)(end-start))/CLOCKS_PER_SEC);
    return time;
}
double time_beta(int a)
{
    clock_t start,end;
    start=clock();
    prime_beta(a);
    end=clock();
    double time=(((double)(end-start))/CLOCKS_PER_SEC);
    return time;
}

double time_gamma(int a)
{
    clock_t start,end;
    start=clock();
    prime_beta(a);
    end=clock();
    double time=(((double)(end-start))/CLOCKS_PER_SEC);
    return time;
}

int main()
{
    int num[10]={71,173,281,409,541,659,801,941,1069,1223};
    for (int i=1;i<10;i++)
    {
        printf("\n algo_1 :%f",time_alpha(num[i]));
        printf(" algo_2  :%f",time_beta(num[i]));
        printf(" algo_3:%f",time_gamma(num[i]));
    }
}