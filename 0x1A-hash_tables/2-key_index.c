#include "hash_tables.h"
/**
 * key_index - gives the key index of a key
 * @key: representation of a string in number
 * @size: size of the hash_table
 *
 * Return: key_index of a string
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
