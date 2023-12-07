#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * f4 - This func finds the biggest number
 *
 * @usrn: This is the username
 *
 * @len: This is the length of username
 *
 * Return: biggest number
 *
 */

int f4(char *usrn, int len)
{
	int charm;
	int vcharm;
	unsigned int rand_num;

	charm = *usrn;
	vcharm = 0;

	while (vcharm < len)
	{
		if (charm < usrn[vcharm])
			charm = usrn[vcharm];
		vcharm += 1;
	}

	srand(charm ^ 14);
	rand_num = rand();

	return (rand_num & 63);
}

/**
 * f5 - This func simply multiplies each char of username
 *
 * @usrn: This is the username
 *
 * @len: Represents length of username
 *
 * Return: char
 *
 */

int f5(char *usrn, int len)
{
	int charm;
	int vcharm;

	charm = vcharm = 0;

	while (vcharm < len)
	{
		charm = charm + usrn[vcharm] * usrn[vcharm];
		vcharm += 1;
	}

	return (((unsigned int)charm ^ 239) & 63);
}

/**
 * f6 - This func will generate a random char
 *
 * @usrn: Represents the username
 *
 * Return: char
 *
 */

int f6(char *usrn)
{
	int charm;
	int vcharm;

	charm = vcharm = 0;

	while (vcharm < *usrn)
	{
		charm = rand();
		vcharm += 1;
	}

	return (((unsigned int)charm ^ 229) & 63);
}

/**
 * main - This is the entry point of the prog.
 *
 * @argc: Represents arguments count
 *
 * @argv: Represents arguments vector
 *
 * Return: 0 (Always)
 *
 */

int main(int argc, char **argv)
{
	char keygen[7];
	int len, charm, vcharm;
	long alph[] = {
		0x3877445248432d41, 0x42394530534e6c37, 0x4d6e706762695432,
		0x74767a5835737956, 0x2b554c59634a474f, 0x71786636576a6d34,
		0x723161513346655a, 0x6b756f494b646850 };
	(void) argc;

	for (len = 0; argv[1][len]; len++)
		;
	/* ----------- f1 ----------- */
	keygen[0] = ((char *)alph)[(len ^ 59) & 63];
	/* ----------- f2 ----------- */
	charm = vcharm = 0;
	while (vcharm < len)
	{
		charm = charm + argv[1][vcharm];
		vcharm = vcharm + 1;
	}
	keygen[1] = ((char *)alph)[(charm ^ 79) & 63];
	/* ----------- f3 ----------- */
	charm = 1;
	vcharm = 0;
	while (vcharm < len)
	{
		charm = argv[1][vcharm] * charm;
		vcharm = vcharm + 1;
	}
	keygen[2] = ((char *)alph)[(charm ^ 85) & 63];
	/* ----------- f4 ----------- */
	keygen[3] = ((char *)alph)[f4(argv[1], len)];
	/* ----------- f5 ----------- */
	keygen[4] = ((char *)alph)[f5(argv[1], len)];
	/* ----------- f6 ----------- */
	keygen[5] = ((char *)alph)[f6(argv[1])];
	keygen[6] = '\0';
	for (charm = 0; keygen[charm]; charm++)
		printf("%c", keygen[charm]);
	return (0);
}
