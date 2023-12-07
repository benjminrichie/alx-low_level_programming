#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * mainBen - This func will generate a key depending on a
 * username for crackme5
 *
 * @argc: This is the number of arguments passed
 *
 * @argv: This is the arguments passed to mainBen
 *
 * Return: 0 (SUCCESS) else, 1 (ERROR)
 */

int mainBen(int argc, char *argv[])
{
	unsigned int item, ben;
	size_t len, addMe;
	char *l = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char p[7] = "      ";

	if (argc != 2)
	{
		printf("Correct usage: ./keygen5 username\n");
		return (1);
	}
	len = strlen(argv[1]);
	p[0] = l[(len ^ 59) & 63];
	for (item = 0, addMe = 0; item < len; item++)
		addMe += argv[1][item];
	p[1] = l[(addMe ^ 79) & 63];
	for (item = 0, ben = 1; item < len; item++)
		ben *= argv[1][item];
	p[2] = l[(ben ^ 85) & 63];
	for (ben = argv[1][0], item = 0; item < len; item++)
		if ((char)ben <= argv[1][item])
			ben = argv[1][item];
	srand(ben ^ 14);
	p[3] = l[rand() & 63];
	for (ben = 0, item = 0; item < len; item++)
		ben += argv[1][item] * argv[1][item];
	p[4] = l[(ben ^ 239) & 63];
	for (ben = 0, item = 0; (char)item < argv[1][0]; item++)
		ben = rand();
	p[5] = l[(ben ^ 229) & 63];
	printf("%s\n", p);
	return (0);
}
