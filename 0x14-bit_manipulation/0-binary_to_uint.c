#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: The binary number as a string
 *
 * Return: The converted unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return 0;

	for (int i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
		{
			result <<= 1; /* Left shift the result by 1 position */
		}
		else if (b[i] == '1')
		{
			result = (result << 1) | 1; /* Left shift the result by 1 position and set the rightmost bit to 1 */
		}
		else
		{
			return 0; /* Invalid character encountered, return 0 */
		}
	}

	return result;
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	const char *binary = "110101";
	unsigned int number = binary_to_uint(binary);
	printf(" %s: %u\n", binary, number);

	return 0;
}

