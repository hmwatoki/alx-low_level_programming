#include "hash_tables.h"
/**
 * hash_table_create - creates hash table
 * @size: size of table
 * Return: a pointer to a created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *newTable;
unsigned int i;
if (size == 0)
return (NULL);
newTable = malloc(sizeof(hash_table_t));
if (!newTable)
return (NULL);
newTable->size = size;
newTable->array = calloc(size, sizeof(hash_node_t *));
if (!newTable->array)
{
free(newTable);
return (NULL);
}
return (newTable);
}
