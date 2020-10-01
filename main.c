#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,search,n;
    int arr[100];
    printf("Enter the number of elements");
    scanf("%d",&n);
    printf("Enter the Elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the number to search");
    scanf("%d",&search);
    for(i=0;i<n;i++)
    {
        if(arr[i]==search);
        printf("%d is present at %d",search,i+1);
        break;
    }
    return 0;
}
