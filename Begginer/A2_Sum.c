/* 
 * Algorithm 2: Sum of numbers in the array
 *
 * Date: 2018-03-19
 * Author: Marek Lenartowicz
 */

#include <stdio.h>

int main(void)
{
	int size;
	printf("Enter the size of the array: ");
	scanf("%d", &size);
	int array[size];
	
	int i;
	int sum = 0;
	printf("Enter the array values:\n");
	for (i = 0; i < size; i++) {
		printf("array[%d] = ", i);
		scanf("%d", &array[i]);
		
		sum += array[i];
	}
	
	printf("Sum of the elements in the array: %d", sum);
	
	return 0;
}
