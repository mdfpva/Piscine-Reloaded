#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*range;

	if (min >= max)
		return (0);
	size = max - min;
	range = (int *)malloc(4 * size);
	if (!range)
		return (0);
	while (min < max)
	{
		range[i] = min;
		min++;
	}
	return (range);
}
