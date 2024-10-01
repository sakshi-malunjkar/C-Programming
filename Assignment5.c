// Name = Sakshi Malunjkar
// Roll No = 31
// Batch = B2


#include<stdio.h>
struct cust

{
  char name[20];
  char city[20];
  char gender[20];
  int mobileno;
}cust[3];
int main()
 {
   int n;
   printf("Enter No. of customer");
   scanf("%d",&n);
   int i;
   for(i=0;i<n;i++)
   {
     printf("Enter Customer Name : ");
     scanf("%s",cust[i].name);
     
     printf("Enter City : ");
     scanf("%s",cust[i].city);
     
     printf("Enter Gender : ");
     scanf("%s",cust[i].gender);
     
     printf("Enter Mobile No.");
     scanf("%d",&cust[i].mobileno );
     
    }
     
  printf("Name \t  City \t  Mobile No \t  Gender\n");
  for(i=0; i<n; i++)
  {
    printf("%s\t%s\t %d\t \t%s\n", cust[i].name,cust[i].city,cust[i].mobileno,cust[i].gender);
  }
return 0;

} 
 pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B2_31$ gcc program21.c
pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B2_31$ ./a.out
Enter No. of customer 3
Enter Customer Name : Sakshi
Enter City : Thane
Enter Gender : F
Enter Mobile No. 932607
Enter Customer Name : Rajshree 
Enter City : Kalyan
Enter Gender : F
Enter Mobile No. 959407
Enter Customer Name : Malhari 
Enter City : Kalyan
Enter Gender : M
Enter Mobile No. 797251
Name 	     City 	  Mobile No 	  Gender
Sakshi	    Thane	  932607	      	F
Rajshree	  Kalyan	 959407	 	     F
Malhari	   Kalyan	 797251	 	     M

