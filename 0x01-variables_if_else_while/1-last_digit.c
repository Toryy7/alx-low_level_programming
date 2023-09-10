#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main	-	display	the	last	digit	of	the	number	stored	in	the	variable	n
 * Return:	return	0	and	exit	the	program.
 */
int	main(void)
{
	int	n;

	srand(time(0));
	n	=	rand()	-	RAND_MAX	/	2;
	printf("Last	digit	of	%d	is	%d	",	n,	n	%	10);
	if	(n	%	10	>	5)
		printf("
