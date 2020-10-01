#include<iostream>
#include<time.h>
#include<math.h>
using namespace std;
void gcd(int m, int n)
{
    while (n > 0)

    {

        int r = m % n;

        m = n;

        n = r;

    }

    cout<<"GCD ="<<m;

}
    void conc(int m, int n)
{
    int i,c;

    c=m>=n?n:m;

    for(i=c;i>=1;i--)
    {
        if(m%i==0 && n%i==0)
        {
             printf ("conc = %d \n",i);
             break;
        }
    }

}
void middle(int a, int b)
{
    int i,c,ans=1,m=0,n=0,k=0;

    c=a>=b?b:a;

    for(i=2;i<=c;i++)
    {
        n=0;
        m=0;
        if(a%i==0)
        {
            m=1;
            a=a/i;
        }
        if(b%i==0)
        {
            n=1;
            b=b/i;
        }
        if(n==1 && m==1)
        {
            ans=ans*i;
        }
        if(n==1 || m==1)
        {
            i--;
        }
    }
    printf("The middle is:%d \n",ans);

}
int main()
{
    int m, n,i;

    for( i=0;i<6;i++)
    {
        cout<<"Enter-two integer numbers: ";
        cin>>m>>n;

        clock_t start,end;

        start=clock();
        gcd(m,n);
          end=clock();

        double time_taken=(((double)(end-start))/CLOCKS_PER_SEC);

        cout<<"This program takes "<<time_taken<<" seconds to execute"<<endl;
        start=clock();
         conc(m,n);
           end=clock();

        time_taken=(((double)(end-start))/CLOCKS_PER_SEC);

        cout<<"This program takes "<<time_taken<<" seconds to execute"<<endl;
         start=clock();
         middle(m,n);
        end=clock();

         time_taken=(((double)(end-start))/CLOCKS_PER_SEC);

        cout<<"This program takes "<<time_taken<<" seconds to execute"<<endl;
    }

    return 0;
}
