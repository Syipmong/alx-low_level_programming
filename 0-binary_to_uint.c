#include "main.h"

void print_binary(unsigned long int n)
{
	int num_bits = sizeof(unsigned long int) * 8;  /* Number of bits in unsigned long int */
	unsigned long int mask = 1UL << (num_bits - 1); /* Mask for the leftmost bit */

	int bit;
	for (int i = 0; i < num_bits; i++) {
		bit = (n & mask) ? 1 : 0; /* Extract the current bit */
		mask >>= 1; /* Shift the mask to the right by 1 position */
		/* Print the bit without using printf or puts */
		if (bit == 0) {
			write(1, "0", 1);
		} else {
			write(1, "1", 1);
		}
	}
}

int main(void)
{
	unsigned long int num = 255;

	print_binary(num);
	write(1, "\n", 1);

	return 0;
}

