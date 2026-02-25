int	ft_iterative_factorial(int nb)
{
	int	num;

	if (nb < 0)
		return (0);
	num = 1;
	while (nb > 0)
	{
		num *= nb;
		nb--;
	}
	return (num);
}
