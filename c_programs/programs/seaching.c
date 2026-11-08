//-------------------------------Searching Algorithms------------------------------------------//
/*
NOTE ; A searching algorithm is a method used to find a particular element in a collection 
of data, such as an array.
*/
//-----------------------------Linear Search -------------------------------------------------//
/*Linear search checks each element of an array one by one until,
 the required element is found or the array ends.*/
/*
#include<stdio.h>
int main()
{
    int n,arr[100],key,found=0;
    printf("Enter the number of entries:");
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        printf("Enter the element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    //searching the element
    printf("Enter the element to search : ");
    scanf("%d",&key);
    for (int i=0;i<n;i++)
    {
        if (arr[i]==key)
        {
            found=1;
            printf("The element is present in the array at the index %d",i);
            break ;
        }
    }
    if (found==0)
    {
        printf("The given element is not in the array !!");
    }
    return 0 ;
}
*/
//---------------------------------Binary Search --------------------------------------------//
/*Binary search repeatedly divides a sorted array into two halves to find the required element*/
/*
#include<stdio.h>
int main()
{
    int n ,arr[100],key,found=0,temp,count=0;
    printf("Enter the number of entries: ");
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        printf("Enter the element %d: ",i);
        scanf("%d",&arr[i]);
    }
    int low =0,high=n-1,mid=(low+high)/2;
    //sort the array 
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
    //search the element 
    printf("Enter the element to be searrched : ");
    scanf("%d",&key);
    printf("\n");
    while (low<=high)
    {
        if (arr[mid]==key)
        {
            printf("Element found at index %d\n",mid);
            found=1;
            break ;
        }
        else if (arr[mid]<key)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    if (found==0)    
    {
        printf("Element not present !!");
    }
    return 0 ;

}
*/
