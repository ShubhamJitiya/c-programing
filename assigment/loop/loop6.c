#include<stdio.h>
#include<conio.h>
void main()

{
    int n,j,sum=0;

    printf("enter upper limit :");
    scanf("%d",&j);

for (n=2;n<=j;n+=2)
    {
        sum += n;


    }
     printf("sum of even no 1 to %d = %d",j,sum);
}





