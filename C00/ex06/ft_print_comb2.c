#include <unistd.h>

void	result(char num[4])
{
	write(1, &num[0], 1);
	write(1, &num[1], 1);
	write(1, " ", 1);
	write(1, &num[2], 1);
	write(1, &num[3], 1);
	if (!(num[0] == '9' && num[1] == '8'))
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	char	num[4];

	num[0] = '0';
	num[1] = '0';
	while (num[0] <= '9')
	{
		while (num[1] <= '9')
		{
			num[2] = num[0];
			while (num[2] <= '9')
			{
				num[3] = num[1] + 1;
				while (num[3] <= '9')
				{
					result(num);
					num[3]++;
				}
				num[2]++;
			}
			num[1]++;
		}
		num[1] = '0';
		num[0]++;
	}
}
