#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table information
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			while (ht->array[i])
			{
				tmp = ht->array[i];
				free(tmp->key);
				free(tmp->value);
				ht->array[i] = ht->array[i]->next;
				free(tmp);
			}
		}
	}
	free(ht->array);
	free(ht);
}

