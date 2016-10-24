#include <stdio.h>
int main()
{
    int n,i,sum=0;
    
    printf("Enter a positive integer: ");
    scanf("%d",&n);
printf("the numbers are:");
    for(i=1; i<= n++i)
    {
        sum += i; 
printf("%d",sum);  
    }
    printf("Sum = %d",sum);
    return 0;
}