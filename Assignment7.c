//Name = Sakshi Malunjkar
//Roll No = 31
//Batch = AIDS B2


#include <stdio.h>  
void main()
 {  
   int m, n, i, j;  
   printf("Enter the number of rows and columns of the matrices: ");  
   scanf("%d%d", &m, &n);  
   int a[m][n], b[m][n], c[m][n];  
   printf("Enter the elements of first matrix: \n");  
   for (i = 0; i < m; i++) {  
      for (j = 0; j < n; j++) {  
         scanf("%d", &a[i][j]);  
      }  
   }  
   printf("Enter the elements of second matrix : \n");  
   for (i = 0; i < m; i++) {  
      for (j = 0; j < n; j++) {  
         scanf("%d", &b[i][j]);  
      }  
   }  
 
   for (i = 0; i < m; i++) 
{  
      for (j = 0; j < n; j++)
       {  
         c[i][j] = a[i][j] + b[i][j];  
      }  
   }  
   
   printf("The sum of the two matrices is: \n");  
   for (i = 0; i < m; i++)
 {  
      for (j = 0; j < n; j++)
      {  
         printf("%d \t", c[i][j]);  
      }  
      printf("\n");  
   }  
 }
 #include <stdio.h>  
void main()
 {  
   int m, n, i, j;  
   printf("Enter the number of rows and columns of the matrices: ");  
   scanf("%d%d", &m, &n);  
   int a[m][n], b[m][n], c[m][n];  
   printf("Enter the elements of first matrix: \n");  
   for (i = 0; i < m; i++) {  
      for (j = 0; j < n; j++) {  
         scanf("%d", &a[i][j]);  
      }  
   }  
   printf("Enter the elements of second matrix : \n");  
   for (i = 0; i < m; i++) {  
      for (j = 0; j < n; j++) {  
         scanf("%d", &b[i][j]);  
      }  
   }  
 
   for (i = 0; i < m; i++) 
{  
      for (j = 0; j < n; j++)
       {  
         c[i][j] = a[i][j] + b[i][j];  
      }  
   }  
   
   printf("The sum of the two matrices is: \n");  
   for (i = 0; i < m; i++)
 {  
      for (j = 0; j < n; j++)
      {  
         printf("%d \t", c[i][j]);  
      }  
      printf("\n");  
   }  
 }
 #include <stdio.h>  
void main()
 {  
   int m, n, i, j;  
   printf("Enter the number of rows and columns of the matrices: ");  
   scanf("%d%d", &m, &n);  
   int a[m][n], b[m][n], c[m][n];  
   printf("Enter the elements of first matrix: \n");  
   for (i = 0; i < m; i++) {  
      for (j = 0; j < n; j++) {  
         scanf("%d", &a[i][j]);  
      }  
   }  
   printf("Enter the elements of second matrix : \n");  
   for (i = 0; i < m; i++) {  
      for (j = 0; j < n; j++) {  
         scanf("%d", &b[i][j]);  
      }  
   }  
 
   for (i = 0; i < m; i++) 
{  
      for (j = 0; j < n; j++)
       {  
         c[i][j] = a[i][j] + b[i][j];  
      }  
   }  
   
   printf("The sum of the two matrices is: \n");  
   for (i = 0; i < m; i++)
 {  
      for (j = 0; j < n; j++)
      {  
         printf("%d \t", c[i][j]);  
      }  
      printf("\n");  
   }  
 }
 
/*#include <stdio.h>  
void main()
 {  
   int m, n, i, j;  
   printf("Enter the number of rows and columns of the matrices: ");  
   scanf("%d%d", &m, &n);  
   int a[m][n], b[m][n], c[m][n];  
   printf("Enter the elements of first matrix: \n");  
   for (i = 0; i < m; i++) {  
      for (j = 0; j < n; j++) {  
         scanf("%d", &a[i][j]);  
      }  
   }  
   printf("Enter the elements of second matrix : \n");  
   for (i = 0; i < m; i++) {  
      for (j = 0; j < n; j++) {  
         scanf("%d", &b[i][j]);  
      }  
   }  
 
   for (i = 0; i < m; i++) 
{  
      for (j = 0; j < n; j++)
       {  
         c[i][j] = a[i][j] + b[i][j];  
      }  
   }  
   
   printf("The sum of the two matrices is: \n");  
   for (i = 0; i < m; i++)
 {  
      for (j = 0; j < n; j++)
      {  
         printf("%d \t", c[i][j]);  
      }  
      printf("\n");  
   }  
 }
 /*pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B2_31$ gcc Assignment7.c
pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B2_31$ ./a.out
Enter the number of rows and columns of the matrices: 2
2
Enter the elements of first matrix: 
5
5
4
4
Enter the elements of second matrix : 
2
9
4
6
The sum of the two matrices is: 
7 	14 	
8 	10 	
*/

