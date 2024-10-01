//Name : Sakshi Malunjkar
//Roll : 31
//Batch : AIDS B2

#include<stdio.h>
#include<string.h>

int main()


{

 char str1[20];
	char str2[20];
 int n,Result,ch;
 do
 {
printf("Enter \n 1.String Length \n 2.String Copy \n 3.String Concetination \n 4.String Compare \n  ");
scanf("%d",&ch);

switch(ch)
{
		
	case 1 :	
		        printf("Enter the String ");
		        scanf("%s",str1);
		
		        Result = strlen(str1);
	        	printf("Total Length is %d ",Result);
	        	break;
	        	
 case 2 :
          
		
	        	printf("Enter the String1 : ");
	        	scanf("%s",str1);
	        	printf("Enter the String2 : ");
		        scanf("%s",str2);
		
	        	strcpy(str1,str2);
	        	printf("String is %s",str1);
	         printf("\nString is %s",str2); 
	         break;
	         
 case 3 :
         
		
		       printf("Enter the String1 : ");
		       scanf("%s",str1);
		       printf("Enter the String2 : ");
		       scanf("%s",str2);
		
	       	strcat(str1,str2);
		       printf("String1 is %s",str1);
		       break;
		       
 case 4 :
         
		      
		
	      	printf("Enter the String1 : ");
		      scanf("%s",str1);
		      printf("Enter the String2 : ");
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
		      break;
		      
 default : 
          printf("Wrong Choice");
          break;
}
 printf("\nDo you wish to to continue");
 scanf("%d",&n);
 }
 while(n==1);

  return 0;
}
/*pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B2_31$ gcc Assignment4.c
pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B2_31$ ./a.out
Enter 
 1.String Length 
 2.String Copy 
 3.String Concetination 
 4.String Compare 
  4
Enter the String1 : MUMBAI
Enter the String2 : MUMBAI
String is equal
Do you wish to to continue1
Enter 
 1.String Length 
 2.String Copy 
 3.String Concetination 
 4.String Compare 
  3
Enter the String1 : KK
Enter the String2 : Wagh
String1 is KKWagh
Do you wish to to continue
*/

	 
	


