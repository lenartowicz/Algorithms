/*
 * Algorithm 3: Element occurance in the array
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
	
	int needle;	
	printf("Integer you want to search for: ");
	scanf("%d", &needle);
	
	int i;
	int counter = 0;
	printf("Enter the array values:\n");
	for (i = 0; i < size; i++) {
		printf("array[%d] = ", i);
		scanf("%d", &array[i]);
		
		if (array[i] == needle) {
			counter++;
		}
	}
	
	printf("The value you have searched for appears %d time/s!", counter);
	
	return 0;
}
