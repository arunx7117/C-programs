//---------------------------------------Bubble sorting---------------------------------// 
/*----------------------Ascending Order problem ----------------------------------------//
#include<stdio.h>
int main ()
{
    int n , arr[100],temp;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    for (int i=1 ;i<=n;i++)
    {
        printf("Enter the element %d :",i);
        scanf("%d",&arr[i]);
    }
    for (int i=1;i<=n-1;i++)
    {
        for (int j =1;j<=n-i-1;j++)
        {
            if (arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("Ascending order :");
    for (int i =1;i<=n;i++)
    {
        printf("%d  ",arr[i]);
    }
    return 0;
}
//NOTE : Use int i=0 ; because the array starts with index 0 not 1
*/
//------------------------------Descending Order Problem------------------------------------//
/*#include<stdio.h>
int main ()
{
    int n , arr[100],temp;
    printf("Enter the number of elemnts :");
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        printf("Enter the element %d:",i);
        scanf("%d",&arr[i]);
    }
    for (int i=0 ;i<n-1;i++)
    {
        for (int j=0;j<n-i-1;j++)
        {
            if (arr[j]<arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("Descending Order :");
    for (int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0 ;
}

*/
//--------------Count how many swaps occured------------------------------------//
/*#include<stdio.h>
int main()
{
    int n,arr[100],temp,count=0;
    printf("Enter the number of elements :");
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        printf("Enter the element %d:",i);
        scanf("%d",&arr[i]);
    }
    for (int i=0 ;i<n-1;i++)
    {
        for (int j=0;j<n-i-1;j++)
        {
            if (arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                count++;
            }
        }
    }
    printf("Sorted Array : ");
    for (int i=0 ;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0 ;
}
*/


