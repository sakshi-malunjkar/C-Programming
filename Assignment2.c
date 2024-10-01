//Name = Sakshi Malhari Malunjkar
//Roll No = 31
//Batch = AIDS B2




#include<stdio.h>
#include<math.h>
int main()
{
		float S1;
		float S2;
		float S3;
		float Perimeter,S,Area;

		 printf("Enter Side1 = ");
		 scanf("%f",&S1);
		 
		 printf("Enter Side2 = ");
		 scanf("%f",&S2);
		 
		 printf("Enter Side3 = ");
		 scanf("%f",&S3);
		 
		 if(S1==S2 && S2==S3 && S1==S3)
		  {
		     printf("Triangle is Equilateral");	
		     Perimeter = S1+S2+S3;
		     S = S1+S2+S3/2;
		     Area = sqrt(S*(S-S1)*(S-S2)*(S-S3));
		     printf("\nPerimeter of Triangle = %f",Perimeter);
		     printf("\nArea of Triangle = %f",Area);
		   
		  }
		   else if(S1==S2||S2==S3||S1==S3)
		   {
		      printf("Triangle is Isosceles");
		      Perimeter = S1+S2+S3;
		      S = S1+S2+S3/2;
		      Area = sqrt(S*(S-S1)*(S-S2)*(S-S3));
		      printf("\nPerimeter of Triangle = %f",Perimeter);
		      printf("\nArea of Triangle = %f",Area);
		   }
		   
		   else if((S1*S1==S2*S2+S3*S3)||(S2*S2==S1*S1+S3*S3)||(S3*S3==S1*S1+S2*S2))
		   {
		       printf("Triangle is Right Angle ");
		       Perimeter = S1+S2+S3;
		      S = S1+S2+S3/2;
		      Area = sqrt(S*(S-S1)*(S-S2)*(S-S3));
		      printf("\nPerimeter of Triangle = %f",Perimeter);
		      printf("\nArea of Triangle = %f",Area);
		   }
	
		  return 0;
}
/*pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B2_31$ gcc Assignment2.c -lm
pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B2_31$ ./a.out
Enter Side1 = 20
Enter Side2 = 20
Enter Side3 = 20 
Triangle is Equilateral
Perimeter of Triangle = 60.000000
Area of Triangle = 1161.895020pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B2_31$ 
*/








