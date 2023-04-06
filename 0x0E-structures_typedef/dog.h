#ifndef DOG_H
#define DOG_H
/**
 * struct dog - struct dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
*/
struct dog
{
char *name;
float age;
char *owner;
};
/*
 * File: dog.h
 * Auth: hmwatoki
 */
/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;
#include <stdio.h>
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
