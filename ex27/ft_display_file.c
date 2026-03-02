#include <unistd.h>
#include <fcntl.h>

void	ft_putstr_error(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(2, &str[i], 1);
		i++;
	}
	write(2, "\n", 1);
}

int	ft_display_file(char *filename)
{
	int		fd;
	int		ret;
	char	buffer[2048];

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr_error("Cannot read file.");
		return (1);
	}
	while ((ret = read(fd, buffer, 2048)) > 0)
		write(1, buffer, ret);
	if (ret == -1)
		ft_putstr_error("Cannot read file");
	close(fd);
	return (0);
}

int	main(int ac, char **av)
{
	if (ac == 1)
		ft_putstr_error("File name missing.");
	else if (ac > 2)
		ft_putstr_error("Too many arguments.");
	else
	{
		ft_display_file(av[1]);
		return (0);
	}
	return (1);
}
