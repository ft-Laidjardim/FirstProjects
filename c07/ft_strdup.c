#include <>
#include <>
#include <>

char *ft_strdup(char *str)
{
	char *newstr;
	newstr = (char *) malloc(sizeof(char) * strlen(str) + 1)
	if (newstr == NULL)
		return (Null);
}

int	main()
{
	char *str;
	str = (char*) malloc(sizeof(char) *6);
	strcpy(str, "Hello World!");
	puts(str);
	free(str);
}
