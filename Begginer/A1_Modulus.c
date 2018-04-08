/* 
 * Algorithm 1: Counting the modulus 
 *
 * Date: 2018-03-19
 * Author: Marek Lenartowicz
 */

#include <stdio.h>

int main(void)
{
	int x;
	printf("Enter the integer value: ");
	scanf("%d", &x);
	
	int result;
	if (x >= 0) result = x;
	else result = -x;
	
	printf("The |%d| (absolute value) is equal to %d.", x, result);
	
	return 0;
}
