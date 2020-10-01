#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
int binary(int arr[], int l, int r, int x) 
{ 
    if (r >= l) { 
        int mid = l + (r - l) / 2; 
  
        if (arr[mid] == x) 
            return mid; 
  
        
        if (arr[mid] > x) 
            return binary(arr, l, mid - 1, x); 
  
        
        return binary(arr, mid + 1, r, x); 
    } 
  
    
    return -1; 
} 
void ascending(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
int main()
{
	int n,i,x,c;
	printf("Enter the size of the array ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        a[i]=(rand() % (1000) + 1);
    }
    printf("The numbers assigned are : \n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    printf("Element at middle position : %d\n",a[(n-1)/2]);
    printf("Enter the element to be searched : ");
    scanf("%d",&x);
    ascending(a,n);
    clock_t start,end;
    start=clock();
    c=binary(a,0,n-1,x);
    if(c==-1)
    {
    	printf("Element not found\n");
	}
	else
	{
		printf("Element found\n");
	}
    end=clock();
    double time_taken=(((double)(end-start))/CLOCKS_PER_SEC);
    printf("The time taken to execute is %f seconds",time_taken);
    return 0;
}
