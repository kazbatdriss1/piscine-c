#include <unistd.h>

int    main(int ac, char **av)
{
    if (ac == 2)
    {
        for (int i = 0; av[1][i]; i++)
        {
            write(1, &av[1][i], 1);
            if (av[1][i + 1])
            {
                char    space = ' ';
                write(1, &space, 1);
                write(1, &space, 1);
                write(1, &space, 1);
            }
        }
    }
    write(1, "\n", 1);
    return (0);
}
