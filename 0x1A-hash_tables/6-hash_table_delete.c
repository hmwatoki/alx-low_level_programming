#include "hash_tables.h"
/**
 * hash_table_delete - deletes aa harsh table
 * @ht: hash table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
unsigned int i;
hash_node_t *freev, *temp;
for (i = 0; i < ht->size; i++)
{
freev = ht->array[i];
while (freev)
{
temp = freev->next;
free(freev->key);
free(freev->value);
free(freev);
freev = temp;
}
}
free(ht->array);
free(ht);
}
