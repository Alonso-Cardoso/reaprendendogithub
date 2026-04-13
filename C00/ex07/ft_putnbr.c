#include <unistd.h>

void	result(int div, int multi, int nb)
{
	char	digit;

	while (multi > 1)
	{
		digit = div + 48;
		write(1, &digit, 1);
		div = nb % multi;
		multi /= 10;
		div /= multi;
	}
}

void	ft_putnbr(int nb)
{
	int		divis;
	int		multi;
	char	digit;

	multi = 1;
	divis = nb / 10;
	if (divis >= 1)
	{
		while (divis > 0)
		{
			divis /= 10;
			multi *= 10;
		}
		divis = nb / multi;
		result(divis, multi, nb);
	}
	divis = nb % 10;
	digit = divis + 48;
	write(1, &digit, 1);
}

int	main(void)
{
	ft_putnbr(144352);
}
