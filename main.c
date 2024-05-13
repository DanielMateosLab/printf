
#include "stdio.h"
#include "ft_printf.h"

int main(int argc, char **argv)
{
  (void)argc;
  (void)argv;
  ft_printf(" %c %c %c %%", '0', 0, '2');
  return (0);
}
