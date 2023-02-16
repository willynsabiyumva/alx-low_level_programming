#include <unistd.h>

int main(void)
{
    char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    ssize_t len = sizeof(msg) - 1;  // exclude null terminator

    write(STDERR_FILENO, msg, len);

    return 1;
}
