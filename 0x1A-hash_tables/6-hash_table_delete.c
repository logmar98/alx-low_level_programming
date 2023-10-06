#include "hash_tables.h"

/**
 * hash_table_delete - Delete a hash table.
 * @ht: A pointer to a hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *tmp_ht = ht;
	hash_node_t *hash, *tmp;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			hash = ht->array[i];
			while (hash != NULL)
			{
				tmp = hash->next;
				free(hash->key);
				free(hash->value);
				free(hash);
				hash = tmp;
			}
		}
	}
	free(tmp_ht->array);
	free(tmp_ht);
}