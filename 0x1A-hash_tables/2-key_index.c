#include "hash_tables.h"
/**
 * key_index - returns index of hashtable value
 * @key: key to test
 * @size: size of hash table
 * Return: modulo of a hash value to the size of the table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
return (hash_djb2(key) % size);
}
