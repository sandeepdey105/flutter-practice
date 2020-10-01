#include <math.h> 
#include <stdio.h> 
#include<time.h>
#include <stdlib.h>

void insertionSort(int arr[], int n) 
{ 
    int i, key, j; 
    for (i = 1; i < n; i++) { 
        key = arr[i]; 
        j = i - 1; 
        while (j >= 0 && arr[j] > key) { 
            arr[j + 1] = arr[j]; 
            j = j - 1; 
        } 
        arr[j + 1] = key; 
    } 
    printf("Elements after sorting :\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
  printf("\n");
} 
int main()
{
     int a[110],s=0;
    int size;
    srand(time(0));
    printf("Enter size of the array\n");
    scanf("%d",&size);
    a[size];
    printf("elements\n");
    for(int i=0;i<size;i++)
    {
        a[i]=(rand() %  (100 - 2 + 1)) + 2;// generate random number between 2-100
        printf("Input number at position %d is %d\n",(i+1),a[i]);
        
    }    
     clock_t start,end;
    start=clock();
    insertionSort(a,size);
    end=clock();
    double time_taken=(((double)(end-start))/CLOCKS_PER_SEC);
    printf("The program takes %f time to execute \n",time_taken);
    return 0;
}