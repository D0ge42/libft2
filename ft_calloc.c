#include "ft_bzero.c"
#include <stddef.h>
#include <stdlib.h>

void	*calloc(size_t nmemb, size_t size)
{
	void	*array;

	if (nmemb * size >= 4294967295U)
		return (0);
	array = malloc(sizeof(nmemb * size));
	if (!array)
		return (NULL);
	ft_bzero(array, nmemb * size);
	return (array);
}

// int main()
// {
//   int nums[4] = {1,2,3,4};
//   printf("%p\n",nums);
//   ft_bzero(nums,5);
//   printf("%p\n",nums);
//   int i = 0;
//   while (i < 4)
//   {
//     printf("%i\n",nums[i]);
//     i++;
//   }
// }
