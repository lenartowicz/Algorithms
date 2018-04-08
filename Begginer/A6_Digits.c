/*
 * Algorithm 6: Sum of digits in the integer
 *
 * Date: 2018-03-25
 * Author: Marek Lenartowicz
 */

#include <stdio.h>

int main(void)
{
	int number;
	printf("Enter the integer: ");
	scanf("%d", &number);
	
	int digit;
	int sum = 0;
	while (number > 0) {
		digit = number % 10; // divide the number by 10 and assign the remainder 
		number = (number - digit) / 10; // example: (143 - 3) / 10 = 14
		sum = sum + digit; // add the digit to the existing sum pool
	}
	
	printf("The sum of digits in your integer: %d", sum);
	
	return 0;
}
