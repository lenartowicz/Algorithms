/* 
 * Algorithm 5: Searching for the given element in the array
 *
 * Date: 2018-03-24
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
	printf("Enter array values:\n");
	for (i = 0; i < size; i++) {
		printf("array[%d] = ", i);
		scanf("%d", &array[i]);
	}
	
	for (i = 0; i < size; i++) {
		if (array[i] == needle) printf("\nFound selected value under the %d index!", i);
		else if (i == size-1) printf("\nThere is no value like that in your array!");
	}
	
	return 0;
}
