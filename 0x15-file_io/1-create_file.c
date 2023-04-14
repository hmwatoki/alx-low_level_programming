#include "main.h"
#include <stdio.h>
#include <sys/types.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <string.h>
#include <unistd.h>
/**
 * create_file - creates a file and writes text content to it
 * @filename: name of the file to create
 * @text_content: text content to write to file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
int fl;
ssize_t written_bytes;
if (filename == NULL)
return (-1);
/*lets create the file*/
fl = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
if (fl == -1)
return (-1);
if (text_content != NULL)
{
written_bytes = write(fl, text_content, strlen(text_content));
if (written_bytes == -1)
{
close(fl);
return (-1);
}
}
/*close file*/
close(fl);
return (1);
}
