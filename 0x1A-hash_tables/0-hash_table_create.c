#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the table
 *
 * Return: pointer to the created hash table, or NULL on failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
if (size == 0)
return (NULL);

hash_table_t *newTable = malloc(sizeof(hash_table_t));
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
