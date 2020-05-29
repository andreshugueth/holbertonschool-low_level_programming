#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 *
 * Return: NULL on failure, pointer to the newly hash table on
 * success
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;

	hash_table = malloc(sizeof(hash_table_t));
	if (!hash_table)
		return (NULL);

	hash_table->size = size;
	hash_table->array = malloc(sizeof(hash_node_t) * size);

	if (!(hash_table)->array)
	{
		free(hash_table);
		return (NULL);
	}

	return (hash_table);
}
