//Name = Sakshi Malhari Malunjkar
//Roll No = 31
//Batch = AIDS B2


#include<stdio.h>
int main() 
{
   int i,j;
   printf("Even numbers are : ");
   
   for(i=1;i<=20;i++)
   {
    if(i%2==0)
     printf(" %d", i);
   }
     printf("\nOdd Numbers : ");
     for(j=1;j<=20;j++)
     {
       if(j%2!=0)
       printf(" %d", j);
     }
    
    return 0;
}

/*pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B2_31$ gcc program12.c
pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B2_31$ ./a.out
Even numbers are :  2 4 6 8 10 12 14 16 18 20
Odd Numbers :  1 3 5 7 9 11 13 15 17 19pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B2_31$ */
