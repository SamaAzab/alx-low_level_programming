#include <unistd.h>

/**
* main - Entry point for program execution
* Description: Print a string without using printf or puts
* Return: 0. Program execution is a success
*/

int main(void)
{
char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, msg, 59);
return (1);
}
