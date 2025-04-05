#include <unistd.h> // unistd.h basically has some functions pre-built to do some stuff

void ft_putchar(char c) {
    write(1, &c, 1);
}

int main() {
    ft_putchar('C');
    return 0;
}
