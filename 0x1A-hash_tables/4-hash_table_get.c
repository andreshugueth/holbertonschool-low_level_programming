#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table information
 * @key: key to look at in the ht
 *
 * Return: value on success or NULL on failure
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int slot;
	hash_node_t *entry;

	if (!ht || !key || strcmp(key, "") == 0)
		return (NULL);
	slot = key_index((unsigned char *)key, ht->size);
	entry = ht->array[slot];

	if (!entry)
		return (NULL);

	while (entry != NULL)
	{
		if (strcmp(entry->key, key) == 0)
			return (entry->value);

		entry = entry->next;
	}
	return (NULL);
}
