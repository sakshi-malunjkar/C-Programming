// Name = Sakshi Malunjkar
// Roll No = 31
// Batch = B2

#include <stdio.h>

int Prime(int num)
{
if (num <= 1)
{
return 0;
}
for (int i = 2; i < num; i++)
{
if (num % i == 0)
{
return 0;
}
}
return 1;
}
int main()
{
int number;
printf("Enter a number: ");
scanf("%d", &number);
if (Prime(number))
{
printf("%d is a prime number.\n", number);
} else
{
printf("%d is not a prime number.\n", number);
}
return 0;
}
/*pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B2_31$ gcc program21.c
pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B2_31$ ./a.out
Enter a number: 5
5 is a prime number.
pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B2_31$ 
*/


