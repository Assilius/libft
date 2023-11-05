#include "libft.h"

char	*ft_strchr(const char *s, int с)
{
	while (*s)
	{
		if (*s == с)
			return ((char *)s);
		s++;
	}
	if (с == '\0')
		return ((char *)s);
	return (0);
}
