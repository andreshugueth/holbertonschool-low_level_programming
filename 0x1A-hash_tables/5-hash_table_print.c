#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: hash_table information
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, cond;
	hash_node_t *entry;

	if (!ht)
		return;
	cond = 0;
	printf("{");
	for (i = 0; i < ht->size; ++i)
	{
		entry = ht->array[i];
		if (entry == NULL)
			continue;


		while (entry)
		{
			if (cond == 0)
				printf("%s", "");
			else
				printf(", ");
			printf("'%s': '%s'", entry->key, entry->value);
			cond++;
			entry = entry->next;
		}
	}
	printf("}\n");
}

