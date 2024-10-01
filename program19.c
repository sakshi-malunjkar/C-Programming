//Name : Sakshi Malhari Malunjkar 
//Roll No : 31
//Batch : AIDS B2


#include<stdio.h>
#include<string.h>

int main()
{
		char str1[20];
		char str2[20];
		int Result;
		
		printf("Enter the String1 ");
		scanf("%s",str1);
		printf("Enter the String2 ");
		scanf("%s",str2);
		
		Result =	strcmp(str1,str2);
		if(Result == 0)
		{
		printf("String is equal");
		}
		else
		    {
		      printf("String is not equal");
		    }
		
		return 0;
}

/*pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B2_31$ gcc program19.c
pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B2_31$ ./a.out
Enter the String1 SAKSHI
Enter the String2 SAKSHI
String is equalpl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B2_31$ 
*/

