#include "hash_tables.h"

/**
 * key_index - Get the index
 * @key: The key to get the index
 * @size: The size of the array
 *
 * Return: The index
 * Description: Uses the djb2
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
