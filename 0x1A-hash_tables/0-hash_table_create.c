#include "hash_tables.h"

/**
 * hash_table_create - a function that creates a hash table.
 * @size: the size of the array
 * Return: Returns a pointer to the newly created hash table or NULL otherwise
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash;

	hash = malloc(sizeof(hash_table_t));
	if (hash == NULL)
		return (NULL);

	hash->array = malloc(sizeof(hash_node_t *) * size);
	if (hash->array == NULL)
	{
		free(hash);
		return (NULL);
	}
	hash->size = size;
	return (hash);
}
