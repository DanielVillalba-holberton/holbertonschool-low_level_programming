
#include "search_algos.h"
/**
 * a_pr - prints an array
 * @array: the array to be printed
 * @min: minimum index number to print
 * @max: maximum index number to print
 * Return: nothing void
 */
void a_pr(int *array, size_t min, size_t max)
{
	printf("Searching in array: ");
	while (min <= max)
	{
		printf("%d", array[min]);
		printf("%s", min++ < max ? ", " : "\n");
	}
}
/**
 * main_bin_search - binary search recursively
 * @array: array to search
 * @min: minimum index of the array
 * @max: maximum index of the array
 * @value: value to search for
 * Return: -1 if fails or the index where the number is located
 */
int main_bin_search(int *array, size_t min, size_t max, int value)
{
	size_t mid;

	a_pr(array, min, max);
	mid = min + ((max - min) / 2);

	if (value == array[mid])
		return (mid);

	if (min == max || max == 0)
		return (-1);

	if (value > array[mid])
		min = mid + 1;
	else
		max = mid;

	return (main_bin_search(array, min, max, value));
}
/**
 * binary_search - searches for a value in an array using the Binary search
 * @array: pointer to the first element of the array
 * @size: size of array
 * @value: value to search for
 *
 * Return: -1 if fails or the index where the number is
 */
int binary_search(int *array, size_t size, int value)
{
	if (array && size)
		return (main_bin_search(array, 0, size - 1, value));
	else
		return (-1);
}
