#include "hash_tables.h"

/**
 * hash_table_t - Create a hash table
 *
 * @size: Size of the hash table
 *
 * Return: hash_table_t pointer
 **/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h_table = (hash_table_t *)malloc(sizeof(hash_table_t));

	if (!h_table)
		return (NULL);
	h_table->size = size;
	h_table->array = (hash_node_t **) malloc(sizeof(hash_node_t *) * size);
	return (h_table);
}
