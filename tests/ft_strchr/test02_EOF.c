#include <stdlib.h>
#include <stdio.h>

char	*ft_strchr(const char *s, int c);

int main(void)
{
	char	*test = "a b c";
	char	*dest = ft_strchr(test, 0);
	if (dest == NULL)
	{
		printf("strchr returned NULL\n");
		return 1;
	}
    printf("strchr(\"%s\", '%c') returned %s\n", test, 0, dest);
}