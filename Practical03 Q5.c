#include <stdio.h>
int main()
{
 int n1,n2;

 printf("Input the first integer : ");
 scanf("%d",&n1);
 printf("Input the second integer : ");
 scanf("%d",&n2);

 if(n1%n2==0)
    printf("\n%d is a multiple of %d.\n", n1, n2);
 else
    printf("\n%d is not a multiple of %d.\n", n1, n2);
}
