//Name : Sakshi Malhari Malunjkar 
//Roll No : 31
//Batch : AIDS B2


#include<stdio.h>
#include<string.h>

int main()
{
		char str1[20];
		char str2[20];
		
		printf("Enter the String1 ");
		scanf("%s",str1);
		printf("Enter the String2 ");
		scanf("%s",str2);
		
		strcpy(str1,str2);
		printf("String is %s",str1);
		printf("\nString is %s",str2); 
		return 0;
}
/*pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B2_31$ gcc program17.c
pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B2_31$ ./a.out
Enter the String1 Kalyan
Enter the String2 Thane
String is Thane
String is Thanepl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B2_31$ 
*/
