#include <stdio.h>
#include<time.h>

 void Linear_Search(int keynum,int num,int array[])
 {    int i,found = 0;
      for (i = 0; i < num ; i++)
    {
        if (keynum == array[i] )
        {
            found = 1;
            break;
        }
    }
    if (found == 1)
        printf("Element is present in the array at position %d",i+1);
    else
        printf("Element is not present in the array\n");
 }
 
void main()
{  int num;
 
    int i,  keynum, found = 0;
 
    printf("Enter the number of elements ");
    scanf("%d", &num);
    int array[num];
  
   for ( i=0; i<num; i++)
    {
        array[i] = (rand() % 100)+1;
    }
    
     for ( i=0; i<num; i++)
    {
        printf(" %d",array[i]);
    }
 
    printf("\nEnter the element to be searched ");
    scanf("%d", &keynum);

    clock_t start,end;

    start=clock();
    Linear_Search(keynum,num,array);
    end=clock();

    double time_taken=(((double)(end-start))/CLOCKS_PER_SEC);
    
    printf("\nThis program takes %f seconds to execu",time_taken);

}