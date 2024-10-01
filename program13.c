// Name = Sakshi Malhari Malunjkar 
// Roll No 31
// Batch = AIDS B2



#include<stdio.h>
int main()
{
    int n;
    printf("Enter the Week No (1-7): ");
    scanf("%d",&n);
    
    switch(n)
    {
     case 1 : printf("Today is Monday\n");
     									break;
     	
     case 2 : printf("Today is Tuesday\n");
              break;
     
     case 3 : printf("Today is Wednesday\n");
              break;
             
     case 4 : printf("Today is Thursday\n");
              break;
      
     case 5 : printf("Today is Friday\n");
              break;
              
     case 6 : printf("Today is Saturday\n");
              break;         
              
     case 7 : printf("Today is Sunday\n");
              break;
     
     default : printf("Enter Correct No.\n");
            
      
      }
      
     printf("Have A Good Day!");
     
     return 0;
 }
 /*pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B2_31$ gcc program13.c
pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B2_31$ ./a.out
Enter the Week No (1-7): 4
Today is Thursday
Have A Good Day!pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B2_31$ 

*/
