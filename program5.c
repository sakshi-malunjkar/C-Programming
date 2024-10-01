// Name = Sakshi Malhari Malunjkar 
// Roll No = 31
// Batch = AIDS B 




#include <stdio.h>
int main()
{
						float P;
						float R;
						float I;
						float SI;
						printf("Enter the Principal Amount: ");
						scanf("%f",&P);
						printf("Enter Rate of Intrest: ");
						scanf("%f",&R);
						printf("Enter the Time Period in Year: ");
						scanf("%f",&I);
						SI = P*R*I;
						printf("Simple Intrest : %f",SI);
						return 0 ;
						}
						
		/* pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B2_31$ gcc program5.c
pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B2_31$ .a./out
bash: .a./out: No such file or directory
pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B2_31$ ./a.out
Enter the Principal Amount: 5000
Enter Rate of Intrest: 2
Enter the Time Period in Year: 5
Simple Intrest : 50000.000000pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B2_31$ 
*/
