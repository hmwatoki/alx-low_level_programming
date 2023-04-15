#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
/**
 * main - copies the content of a file to another file
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
*/
int main(int argc, const char *argv[])
{
int file_from, file_to;
ssize_t read_bytes;
if (argc != 3)
{
fprintf(stderr, "Usage: %s file_from file_to\n", argv[0]);
exit(0);
}
file_from = open(argv[1], O_RDONLY);
if (file_from == -1)
{
fprintf(stderr, "Error: Can't read from file %s: %s\n", argv[1], strerror(errno));
exit(0);
}
file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
if (file_to == -1)
{
fprintf(stderr, "Error: Can't write to file %s: %s\n", argv[2], strerror(errno));
exit(0);
}
char buffer[1024];
while ((read_bytes = read(file_from, buffer, sizeof(buffer))) > 0)
{
if (write(file_to, buffer, read_bytes) != read_bytes)
{
fprintf(stderr, "Error: Can't write to file %s: %s\n", argv[2], strerror(errno));
exit(0);
}
}
if (read_bytes == -1)
{
fprintf(stderr, "Error: Can't read from file %s: %s\n", argv[1], strerror(errno));
exit(0);
}
if (close(file_from) == -1 || close(file_to) == -1)
{
fprintf(stderr, "Error: Can't close file descriptor: %s\n", strerror(errno));
exit(0);
}
return (0);
}
