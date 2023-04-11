**C - File I/O project**

Input/output (I/O) operations in C programming language are done through file streams or simply, files. A file stream is a logical connection between a program and a physical file. In C, there are two types of file streams: input streams (or input files) and output streams (or output files). 
 
- Input files are used to read data from a file and store it in a program. To open an input file in C, you need to use the fopen() function with "r" flag. 
- Output files are used to write data from a program to a file. To open an output file in C, you need to use the fopen() function with "w" flag. 
 
Here are some basic functions used for I/O operations in C: 
 
- fprintf() - writes formatted output to a file 
- fscanf() - reads formatted input from a file 
- fgetc() - reads a character from a file 
- fputc() - writes a character to a file 
- fgets() - reads a line of text from a file 
- fputs() - writes a line of text to a file 
 
When you are done with a file, you should close it using the fclose() function. This will release the resources allocated to the file. 
 
That's a quick overview of I/O files in C.