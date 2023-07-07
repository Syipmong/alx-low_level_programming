#include <stdio.h>
#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: The number to be printed in binary
 */
void print_binary(unsigned long int n)
{
	int num_bits = sizeof(unsigned long int) * 8;  /* Number of bits in unsigned long int */

	/* Starting from the most significant bit, check each bit and print it */
	for (int i = num_bits - 1; i >= 0; i--)
	{
		unsigned long int mask = 1UL << i;  /* Create a mask to extract the bit at position i */
		unsigned long int bit = (n & mask) >> i;  /* Extract the bit at position i */

		printf("%lu", bit);  /* Print the bit */
	}
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long int num = 255;

	printf("Binary representation of %lu: ", num);
	print_binary(num);
	printf("\n");

	return 0;
}

