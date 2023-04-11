#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - reads a text file and prints it to stdout
 * @filename: name of the file
 * @letters: number of letters
 * Return: number of letters it could read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
FILE *fl;
char *buffer;
ssize_t readbts;
ssize_t btswritten;
if (filename ==  NULL)
{
return (0);
}
/*open file*/
fl = fopen(filename, "r");
if (fl == NULL)
{
return (0);
}
/*allocate a buffer*/
buffer = (char *) malloc(letters * sizeof(char));
if (buffer ==  NULL)
{
fclose(fl);
return (0);
}
/*actually read files to buffer*/
readbts = fread(buffer, 1, letters, fl);
/*print to stdout*/
if (readbts > 0)
{
btswritten = fwrite(buffer, 1, readbts, stdout);
if (btswritten != readbts)
{
readbts = 0;
}
}
free(buffer);
fclose(fl);
return (readbts);
}
