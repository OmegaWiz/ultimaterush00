void ft_putchar(char c);

void rush(int x, int y);

void rush(int x, int y)
{
    for(int i = 0; i < y; i++)
    {
        for(int j = 0; j < x; j++)
        {
            if(i == 0 && j == 0 || i == 0 && j == x - 1 || i == y - 1 && j == 0 || i == y - 1 && j == x - 1)
                ft_putchar('o');
            else
            {
                if(i == 0 || i == y - 1)
                    ft_putchar('-');
                else
                {
                    if(j == 0 || j == x -1)
                        ft_putchar('|');
                    else
                        ft_putchar(' ');
                }
            }
        }
        ft_putchar('\n');
    }
}