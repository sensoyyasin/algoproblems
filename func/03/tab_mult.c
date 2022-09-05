#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int nb)
{
    if (nb == -2147483648)
    {
        ft_putchar('-');
        ft_putchar('2');
        nb = (nb % 1000000000 * -1);
    }
    if (nb < 0)
    {
        ft_putchar('-');
        nb = (nb * -1);
    }
    if (nb / 10 > 0)
        ft_putnbr(nb / 10);
    ft_putchar(nb % 10 + '0');

}

int     ft_atoi(char *str)
{
    int i,result,sign;

    i = 0;
    result = 0;
    sign = 1;
    if (*str == '-')
        sign *= -1;
    if (*str == '-' || *str == '+')
        str++;
    while (*str >= '0' && *str <= '9')
    {
        result = result * 10 + *str - 48;
        str++;
    }
    return(result * sign);
}

int main(int argc, char **argv)
{
    int i,sayi;
        
    if (argc != 2)
        write(1, "\n", 1);
    else
    {
        i = 1;
		sayi = ft_atoi(argv[1]);
		while (i <= 9)
		{
			ft_putnbr(i);
			write(1, " x ", 3);
			ft_putnbr(sayi);
			write(1, " = ", 3);
			ft_putnbr(i * sayi);
			write(1, "\n", 1);
			i += 1;
		}
	}
	return (0);
}