//Name : Sakshi Malunjkar
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
		
		strcat(str1,str2);
		
		printf("String1 is %s",str1);
	 
		return 0;
}

/*pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B2_31$ gcc program18.c
pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B2_31$ ./a.out
Enter the String1 Sakshi
Enter the String2 Malunjkar
String1 is SakshiMalunjkarpl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B2_31$ 
*/
