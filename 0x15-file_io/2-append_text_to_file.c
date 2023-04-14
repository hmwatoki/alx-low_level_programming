#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>
/**
 * append_text_to_file - appends at end of a file
 * @filename: name of the file to append
 * @text_content: text to append
 * Return: 1 on success, -1 on failure
 *
*/
int append_text_to_file(const char *filename, char *text_content)
{
int file;
ssize_t written_bytes;
if (filename == NULL)
{
return (-1);
}
/* Open the file in append mode */
file = open(filename, O_WRONLY | O_APPEND);
if (file == -1)
{
return (-1);
}
if (text_content != NULL)
{
written_bytes = write(file, text_content, strlen(text_content));
}
close(file);
/* Close the file and check for errors */
if (written_bytes == -1)
{
return (-1);
}
return (1);
}
