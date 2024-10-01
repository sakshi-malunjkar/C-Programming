//Name : Sakshi Malhari Malunjkar 
//Roll No : 31
// Batch : AIDS B2


#include<stdio.h>
int main()
{
  char Operator;
  float no1,no2,Result=0;
  int ch;
  
  do
  {
  printf("Enter Operator (+,-,*,/) : ");
  scanf("%c",&Operator);
  
  
  printf("Enter num1 : ");
  scanf("%f",&no1);
  printf("Enter num2 : ");
  scanf("%f",&no2);
  
  switch(Operator)
  {
  
   case '+' :
             Result = no1 + no2;
             break;
   case '-' :
             Result = no1 - no2;
             break;
   case '*' :
             Result = no1 * no2;
             break;
   case '/' :
             Result = no1 / no2;
             break;
   default : 
            printf("You have Entered wrong choice");
            break;
  }
  printf("\n the result of %2f %c %2f = %2f",no1, Operator, no2, Result);
  printf("\n do you wish to continue : ");
  scanf("%d", &ch);
  }
  while(ch==1);
  return 0;
}  


/*pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B2_31$ gcc program15.c
pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B2_31$ ./a.out
Enter Operator (+,-,*,/) : *
Enter num1 : 25
Enter num2 : 5

 the result of 25.000000 * 5.000000 = 125.000000
 do you wish to continue : 0

*/
