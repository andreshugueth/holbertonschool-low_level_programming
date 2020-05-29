#include "hash_tables.h"
/*
 * ht_pair - set the node to the table
 * @key: id of the hash_table
 * @value: value stored in the key
 *
 * Return: NULL on failure, entry on success
 */
hash_node_t *ht_pair(const char *key, const char *value)
{
	hash_node_t *entry;

	entry = malloc(sizeof(hash_node_t *));
	if (!entry)
		return (NULL);
	entry->key = malloc(strlen(key) + 1);
	if (!entry->key)
		return (NULL);
	entry->value = malloc(strlen(value) + 1);
	if (!entry->value)
		return (NULL);

	strcpy(entry->key, key);
	strcpy(entry->value, value);

	entry->next = NULL;

	return entry;
}
/*
 * hash_table_set - sets a key & value to a ht
 * @ht: hash table 
 * @key: id of the hash table
 * @value: value stored in key
 *
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int slot;
	hash_node_t *entry, *prev;

	if (!ht || !value || !key || strcmp(key, "") == 0)
		return (0);

	slot = key_index((unsigned char *)key, ht->size);

	entry = ht->array[slot];

	if (entry == NULL)
	{
		ht->array[slot] = ht_pair(key, value);
		if (!ht->array[slot])
			return (0);
		return (1);
	}

	while (entry != NULL)
	{
		if (strcmp(entry->key, key) == 0)
		{
			free(entry->value);
			entry->value = strdup(value);
			return (1);
		}
		prev = entry;
		entry = prev->next;
	}

	prev->next = ht_pair(key, value);
	return (1);
}

