#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*s = (const unsigned char *)src;
	unsigned char		*d;
	const unsigned char	*start = s;

	d = (unsigned char *)dest;
	if (dest <= src)
		while (n--)
			*(d++) = *(s++);
	else if (dest > src)
	{
		d += n - 1; // dest + 4 -->
		s += n - 1; // src + 4
		while (n--)
			*(d--) = *(s--);
	}
	return (dest);
}

// int main()
// {
//   char src[5] = "1234";
//   char dest[] = "    ";
//
//   printf("Indirizzo di memoria di dest %p\n",dest);
//   printf("Indirizzo di memoria di src %p\n",src);
//   void *result = ft_memmove(dest, src, 4);
//   printf("FUNZIONE MIA: Indirizzo memoria di result %p\n e contiene %s\n",result,(char *)result);
//   void *result2 = memmove(dest, src, 4);
//   printf("FUNZIONE OFFI: Indirizzo memoria di result %p\n e contiene %s\n",result2,(char *)result2);
// }
