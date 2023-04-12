#include "hash_tables.h"

/**
 * hash_table_set - adds an element to a hash table
 *
 * @ht: hash table
 * @key: key of the item
 * @value: value associated with the key
 *
 * Return: integer
 **/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = malloc(sizeof(hash_node_t));
	unsigned long int index;
	hash_node_t *temp;

	if ((!new_node) || *key == '\0' || (!ht) || (!value) || (!key))
		return (0);
	index = key_index((const unsigned char *)key, ht->size);

	new_node->key = strdup(key);
	new_node->value = strdup(value);

	temp = ht->array[index];
	if (!temp)
	{
		temp = new_node;
	}

	else
	{
		while (temp)
		{
			temp = temp->next;
		}
		temp = new_node;
	}
	return (1);
}
