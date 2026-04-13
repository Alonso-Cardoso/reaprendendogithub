#include <unistd.h>

void	ft_is_negative(int n)
{
	char	signal;

	signal = 'P';
	if (n < 0)
		signal = 'N';
	write(1, &signal, 1);
}
