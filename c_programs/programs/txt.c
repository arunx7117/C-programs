/*
 #include<stdio.h>
int square(int n ){
    return n*n;
}
int main (){
    int n ;
    printf("Enter the number to be square:");
    scanf("%d",&n);
    int result=square(n);
    printf("the square of the number :%d",result);
    return 0 ;

}
*/
/*
#include<stdio.h>
int even(int n)
{
    if (n%2==0)
    {
        printf("The given number is even ");
    }
    else 
    {
        printf("The given number is odd ");

    }
}
int main()
{
    int n;
    printf("Enter the number to check even or odd:");      
    scanf("%d",&n);
    int result=even(n);

    return 0;
}
*/
/*
#include<stdio.h>
int max(int a, int b ,int c )
{
    if (a>b && a>c )
    {
        printf("The number %d is the largest number ",a);
    }
    else if (b>a && b>c )
    {
        printf("The number %d is the largest number ",b );
    }
    else if (c>a && c>b )
    {
        printf("The number %d is the largest number ",c );
    }
}
int main ()
{
    int result = max (10,20,30);
    return 0 ;
}
*/
/*
#include<stdio.h>
int fact(int n )
{
    if (n==0){
        return 1;
    }
    return n*fact(n-1);
}
int main()
{
    int n ;
    printf("Enter the number :");
    scanf("%d",&n);
    int result =fact (n);
    printf("The factorial :%d",result);
    return 0 ;
}
*/
/*
#include<stdio.h>
int fib(int n )
{
    if(n==0)
        return 0;
    else if (n==1)
        return 1;
    else 
        return fib(n-1)+fib(n-2);

}
int main()
{
    int n ;
    printf("The number of terms :");
    scanf("%d",&n);
    for (int i =0 ; i<n ; i++)
    {
        printf("%d ",fib(i));
    }
    return 0 ;
}
*/
/*
#include<stdio.h>
int sum(int n )
{
    int sum =0,digit ;
    while (n>0)
    {
        digit=n%10;
        sum=sum+digit;
        n=n/10;

    }
    return sum ;
}
int main()
{
    int n ; 
    printf("Enter the number:");
    scanf("%d",&n);
    int result=sum(n);
    printf("The sum of digits :%d",result);
    return 0 ;
}
*/
/*
#include<stdio.h>
int main ()
{
    int a[1001];
    for (int i=1;i<=5;i++)
    {
        printf("Enter Element %d :",i);
        scanf("%d",&a[i]);
        printf("\n");
    }
    int max=a[1];
    int min =a[1];
    for (int i=2;i<=5;i++)
    {
        if (a[i]>max)
        {
            max=a[i];
        }
        if (a[i]<min)
        {
            min=a[i];
        }
    }
    printf("The largest element  in the list : %d\n",max);
    printf("The smallest element in the list : %d\n",min);
    return 0 ;
}
*/
