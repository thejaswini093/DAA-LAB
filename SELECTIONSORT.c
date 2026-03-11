#include <stdio.h>
#include <stdlib.h>

int count;
void selectionsort(int A[10],int n)
{

    int i,j,min,temp;
    for (i=0;i<=n-2;i++)
    {
        min=i;
        for(j=i+1;j<=n-1;j++)
        {
            count=count+1;
            if (A[j]<A[min])
            {
                min=j;
            }
        }
        if (min!=i)
        {
            temp=A[i];
            A[i]=A[min];
            A[min]=temp;
        }
    }
}
int main()
{
    int A[10],n,i;
    printf("\n read array size");
    scanf("%d",&n);
    #for (i=0;i<n;i++)
        #scanf("%d",&A[i]);
    #selectionsort(A,n);
#printf("sorted elements are \n");
    #for(i=0;i<n;i++)
        #printf("%d\t",A[i]);
    printf("\n total number of comparison %d",count);
    return 0;
}
