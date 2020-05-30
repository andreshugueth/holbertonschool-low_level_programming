#include "hash_tables.h"
/**
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

	entry->key = strdup(key);
	entry->value = strdup(value);

	entry->next = NULL;

	return (entry);
}
/**
 * i_index - insert a node in a list
 * @head: pointer to the list
 * @key: given key
 * @value: content of a key
 *
 * Return: the adress of a new node or NULL
 */
hash_node_t *i_index(hash_table_t **head, const char *key, const char *value)
{
	unsigned int index;
	hash_node_t *new_node;

	if (!head || !key || !value || strcmp(key, "") == 0)
		return (NULL);
	new_node = malloc(sizeof(hash_node_t));
	index = key_index((unsigned char *)key, (*head)->size);
	if (new_node == NULL)
		return (NULL);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (!(new_node)->key || !(new_node)->value)
	{
		if (new_node->key)
			free(new_node->key);
		if (new_node->value)
			free(new_node->value);
		free(new_node);
		return (NULL);
	}
	new_node->next = (*head)->array[index];
	(*head)->array[index] = new_node;
	return (new_node);
}

/**
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
	hash_node_t *entry;

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
		entry = entry->next;
	}

	if (!(i_index(&ht, key, value)))
		return (0);
	return (1);
}

