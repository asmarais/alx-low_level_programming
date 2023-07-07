#include "hash_tables.h"
/**
 * hash_table_delete - Hash function to delete a table
 * @ht: table to be deleted
 * Return: always successful
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i] != NULL)
		{
			temp = ht->array[i]->next;
			free(ht->array[i]->value);
			free(ht->array[i]->key);
			free(ht->array[i]);
			ht->array[i] = temp;
		}
	}
	free(ht->size);
	free(ht->array);
	free(ht);
}
