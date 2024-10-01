// Name = Sakshi Malhari Malunjkar
// Roll = 31
// Batch = AIDS B  


#include<stdio.h>
int main ()
{
			 float BA;
				float D;
				float DA; 
				float A;
				float GST=12;
				float FA;
				printf("Enter the Amount :");
				scanf("%f",&BA);
				printf("Enter the Discount :");
				scanf("%f",&D);
				DA = BA*D/100;
				printf("Discounted Amount = %f\n",DA);
				A = BA-DA;
				printf("Amount to be paid = %f\n",A);
				FA = GST*A/100;
				printf("Final Amount = %f\n",FA);
				return 0; 
}
				
				
		/*		pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B2_31$ gcc Assignment1.c
pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B2_31$ ./a.out
Enter the Amount :20000
Enter the Discount :20
Discounted Amount = 4000.000000
Amount to be paid = 16000.000000
Final Amount = 1920.000000
pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B2_31$ 

*/
