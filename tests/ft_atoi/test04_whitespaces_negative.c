#include <stdio.h>
#define TESTED_STRING "\f\t\n\r\v   		 		 -42"

int	ft_atoi(char *str);

int main(void)
{
	printf("\"%s\" returned %d\n", TESTED_STRING, ft_atoi(TESTED_STRING));
}