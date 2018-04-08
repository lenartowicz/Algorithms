/*
 * Algorithm 4: Minimal / maximal element in the array
 *
 * Date: 2018-03-23
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
	int min = array[0];
	printf("Enter the array values:\n");
	for (i = 0; i <= size; i++) {
		printf("array[%d] = ", i);
		scanf("%d", &array[i]);

		if (array[i] < min) {
			min = array[i];
		}
	}

	printf("Minimal value in this array is %d!", min);

	return 0;
}
