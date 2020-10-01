#include <stdio.h> 
#include <stdlib.h> 
#include<time.h>

void merge(int arr[], int l, int m, int r) 
{ 
	int i, j, k; 
	int left = m - l + 1; 
	int right = r - m; 


	int L[left], R[right]; 


	for (i = 0; i < left; i++) 
		L[i] = arr[l + i]; 
	for (j = 0; j < right; j++) 
		R[j] = arr[m + 1 + j]; 

	
	i = 0; 
	j = 0; 
	k = l;  
	while (i < left && j < right) { 
		if (L[i] <= R[j]) { 
			arr[k] = L[i]; 
			i++; 
		} 
		else { 
			arr[k] = R[j]; 
			j++; 
		} 
		k++; 
	} 


	while (i < left) { 
		arr[k] = L[i]; 
		i++; 
		k++; 
	} 


	while (j < right) { 
		arr[k] = R[j]; 
		j++; 
		k++; 
	} 
} 
void mergeSort(int arr[], int l, int r) 
{ 
	if (l < r) { 
	
		int m = l + (r - l) / 2; 

	
		mergeSort(arr, l, m); 
		mergeSort(arr, m + 1, r); 

		merge(arr, l, m, r); 
	} 
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
void descending(int a[],int n)
{
     int i,j,temp;
    for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]<a[j+1])
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
	int n,i;
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
    ascending(a,n);
    descending(a,n);
    clock_t start,end;
    start=clock();
    mergeSort(a, 0 , n - 1);
    end=clock();
    printf("After sorting\n");
    for(i=0;i<n;i++)
    {
    	printf("%d\n",a[i]);
	}
    double time_taken=(((double)(end-start))/CLOCKS_PER_SEC);
    printf("The time taken to execute is %f seconds",time_taken);
    return 0;
}
