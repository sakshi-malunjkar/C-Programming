// Name = Sakshi Malhari Malunjkar 
// Roll No = 31
// Batch = AIDS B2


#include<stdio.h>
int main()
{
int num,marks,max=0,min=99,count=0,i;

printf("Enter No. of Students : " );
scanf("%d",&num);

for(i=1;i<=num;i++)
{ 
  printf("Enter the Marks of Student :");
  scanf("%d",&marks);
  
  if(marks>max)
  {
    max = marks ;
  }
  
  if(marks<min)
  {
    min = marks ;
  }
  
  if(marks>40)
  {
   count++;
  }
}

printf("Total Number of Students : %d",num);
printf("\nMaximum Marks is : %d",max);
printf("\nMinimum Marks is : %d",min);
printf("\nNo. of Students Passed : %d",count);

return 0;
}

/*pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B2_31$ gcc Assignment3.c
pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B2_31$ ./a.out
Enter No. of Students : 5
Enter the Marks of Student :90
Enter the Marks of Student :65
Enter the Marks of Student :34
Enter the Marks of Student :75
Enter the Marks of Student :50
Total Number of Students : 5
Maximum Marks is : 90
Minimum Marks is : 34
No. of Students Passed : 4pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B2_31$ 
*/
  
