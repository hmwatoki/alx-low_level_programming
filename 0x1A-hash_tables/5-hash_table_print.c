#include "hash_tables.h"
/**
 * hash_table_print - prints hash table
 * @ht: hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
unsigned int i = 0;
unsigned int lastky;
hash_node_t *printer;
if (ht == NULL)
return;
lastky = ht->size - 1;
while (!ht->array[lastky] && lastky != 0)
lastky--;
printf("{");
for (i = 0; i < ht->size; i++)
{
printer = ht->array[i];
while (printer)
{
printf("'%s': '%s'", printer->key, printer->value);
if (i != lastky)
printf(", ");
printer = printer->next;
}
}
printf("}");
printf("\n");
}
