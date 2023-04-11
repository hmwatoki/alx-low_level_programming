#ifndef MAIN_H
#define MAIN_H
/*
 * File: main.h
 * Author: hmwatoki
 * Description: Header file containing declarations for all functions
 * used in 0x15-file_io project
 */
#include <stdio.h>
#include <sys/types.h>
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
#endif