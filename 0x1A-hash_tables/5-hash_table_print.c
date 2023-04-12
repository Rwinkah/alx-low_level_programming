#include "hash_tables.h"

/**
 * hash_table_print - print all values in a hash table
 *
 * @ht: head of the hash table
 *
 * Return: void
 **/

void hash_table_print(const hash_table_t *ht)
{
	long unsigned int index = 0;
	int printer = 0;
	hash_node_t *temp = malloc(sizeof(hash_node_t));

	if (ht && temp)
	{	
		printf("{");
		for (; index < ht->size; index++)
		{
		
			temp = ht->array[index];
			if (temp && temp->key)
			{
				if (printer != 0)
					printf(", ");
				printf("'%s': ", temp->key);
				printer++;
			}
			while (temp)
			{
				printf("'%s'", temp->value);
				if (temp->next)
					printf(", ");
				temp = temp->next;
			}
		}
		printf("}");
		free(temp);
	}
}
