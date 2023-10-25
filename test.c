#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set);
int	main()
{
	const char *s1 = "C12C45C";
	const char *set = "C";

	printf("s1: %s, set: %s y res: %s\n", s1, set, ft_strtrim(s1, set));
}
