#include <stdio.h>
int main()
{
//declear variables int in;
 int in;float fl;double dou;char ch[5];
//inputs
 printf("Enter value for integer:");
 scanf("%d",&in);
 printf("Enter value for float:");

 scanf("%f",&fl);
 printf("Enter value for double:");
 scanf("%lf",&dou);
 printf("Enter value for character:");
 scanf("%s",&ch);
 //outputs
 printf("You enterd Integer value is %d",in);
 printf("You enterd Float value is %f",fl);
 printf("You enterd Double value is %f",dou);
 printf("You enterd character is %s",ch);
}
