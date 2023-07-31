#include <stdio.h>
int main()
{
// Question NO 01


  int num,answ;
  printf("Enter the Number");
  scanf("%d",&num);
  answ=num%2;

  switch (answ)
  {
      case 0:printf("%d is an Even Number",num);break;
      default:printf("%d is an Odd Number",num);break;

  }

 int num,answ;
 printf("Enter the number ");
 scanf("%d",&num);
 answ=num%2;
 if(answ==0)
 {
   printf("%d is an Even Number");
 }
 else
 {
   printf("%d is an Odd Number");
 }



  //Question NO 02

  int  num1,num2;
  printf("Enter the First Number");
  scanf("%d",&num1);
  printf("Enter the Second Number");
  scanf("%d",num2);
  printf("\Enter the Calculation Method ")

  int choice,num1,num2;
  printf("1,")
    printf("1,Addition\n")
    printf("2,")
    printf("3,")
    printf("4,")




   // Question NO 03

    int choice;
    float radius,PI=3.14;


    printf("Menu");
    printf("1. Calculate circumference of a circle\n");
    printf("2. Calculate area of circle\n");
    print("3. Calculate volume of a sphere\n");
    printf("Enter your choice");
    scanf("%d",&choice);

    printf("Enter the Radius: ");
    scanf("%f",&radius);

    switch (choice)
    {


     case 1:
        printf("Circumference: %.2f\n", 2*PI*radius);break;

     case 2:
        printf("Area: %.2f\n", PI*radius*radius);break;

     case 3:
        printf("Volum: %2f\n",4/3.0*PI*radius*radius*radius);break;

     default:
        printf("Invalid choice.\n");break;
    }

   // Question NO 04

    {
        char letter;
        printf("Enter a letter:");
        scanf("%c",&letter);

        switch (letter)
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':

            printf("%c is a vowel.\n",letter);
            break;

            default:
                printf("%c is not a vowel.\n",letter);
                break;
        }
    }


    //Question NO 05

    {
        int month;

        printf("Enter the Month number(1-12):");
        scanf("%d",&month);

        switch (month)
        {
            case 1:("January has 31 days.\n");  break;
            case 1:("Februay has 28 days.\n");  break;
            case 1:("March has 31 days.\n");  break;
            case 1:("April has 30 days.\n");  break;
            case 1:("May has 31 days.\n");  break;
            case 1:("June has 30 days.\n");  break;
            case 1:("July has 31 days.\n");  break;
            case 1:("August has 30 days.\n");  break;
            case 1:("September has 31 days.\n");  break;
            case 1:("October has 30 days.\n");  break;
            case 1:("November has 31 days.\n");  break;
            case 1:("Decemberhas 30 days.\n");  break;
            case 1:("January has 31 days.\n");  break;

            default:
                printf("invalid month number:")
                please enter a number between 1 and 12.\n"
                break;

        }
    }
}

