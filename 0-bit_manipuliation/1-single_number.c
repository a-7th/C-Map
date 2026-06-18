#include <stdio.h>

int	sngl_nmbr(int	R[9])
{
	int	res = 0;
	for (int i = 0; i < 9; i++)
		res ^= R[i];
	return (res);
	if (n % 4 == 1) return(1);
	else if (n % 4 == 2) return(n+1);
	else if (n % 4 == 3) return(0);
	else return(n);
}

int	main()
{
	int	R[9] = {1, 2, 3, 4, 1, 2, 3, 8, 4};
	int	x = sngl_nmbr(R);
	printf("[%d]\n", x);
	return (0);
}
