// Name = Sakshi Malhari Malunjkar 
// Roll No = 31
// Batch = AIDS B2
  
  
#include<stdio.h> 
int main()
{
  char ch;
  printf("Enter the gender : ");
  scanf("%c",&ch);
  switch(ch)
 {
  
  case 'M' : printf("You are Male");
  break;
  
  case 'F' : printf("You are Female");
  break;
  
  case 'm' : printf("You are Male");
  break;
  
  case 'f' : printf("You are Female");
  break;
  
  default : printf("Please Enter Correct Choice");
  break;
  
 }
 
 return 0;
 
}
  
/*pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B2_31$ gcc program14.c
pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B2_31$ ./a.out
Enter the gender : F
You are Femalepl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B2_31$ 
*/
 
  




