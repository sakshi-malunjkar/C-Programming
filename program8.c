// Name : Sakshi Malhari Malunjkar 
// Roll No : 31
// Batch : AIDS B 



#include<stdio.h>
int main()
	{
				int BS;
				int HRA;
				int DA;
				int GS;
				
				
				printf("Enter Basic Salary:");
				scanf("%d",&BS );
				
				if(BS<=15000)
				{
				  HRA = BS*10/100 ; 
				  DA = BS*12/100 ;
				}
			else if(BS>=15000&&BS<=20000)
			 {
			   HRA = BS*12/100 ;
			   DA = BS*15/100 ;
			 }
			  else if(BS>=20000)
			   { 
			    HRA = BS*20/100 ;
			    DA = BS*30/100 ; 
			   }
			   
			   GS = BS+HRA+DA;
			   printf("Gross Salary: %d",GS );
			  
			  return 0;
	}
	
	
	/*pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B2_31$ gcc program8.c
pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B2_31$ ./a.out
Enter Basic Salary:17000
Gross Salary: 21590pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B2_31$ 

*/
