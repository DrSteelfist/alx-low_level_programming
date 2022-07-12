#include "main.h"

/**Write a function that swaps the values of two integers.
 *
 */

void swap_int(int *var1, int *var2)
{
	int tmp = *var1;
	*var1 = *var2;
	*var2 = tmp;
}
