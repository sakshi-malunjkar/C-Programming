// Name = Sakshi Malunjkar
// Roll No = 31
// Batch = B2

#include<stdio.h>
void add(int a , int b);
int main()
{
  int a;
  int b;
 
  printf("Enter the first No. : ");
  scanf("%d",&a);
  
  printf("Enter Second No. : ");
  scanf("%d",&b);
  add(a,b);
  return 0;
 }
  void add(int a,int b)
  {
  int c;
  c=a+b;
  printf("Addition of 2 numbers is :  %d",c);
  }
 
/*pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B2_31$ gcc program20.c
pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B2_31$ ./a.out
Enter the first No. : 10
Enter Second No. : 10
Addition of 2 numbers is :  20pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B2_31$ 
*/


