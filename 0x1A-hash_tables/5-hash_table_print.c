#include "hash_tables.h"

/**
 * hash_table_print - fucntion to print a hash table
 * @ht: type pointer the hash_table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int a;
	hash_node_t *c_node;
	bool flag = false;

	if (ht == NULL)
		return;
	printf("{");
	for (a = 0; a < ht->size; a++)
	{
		if (ht->array[a] != NULL)
		{
			if (flag == true)
				printf(", ");

			for (c_node = ht->array[a]; c_node != NULL;
				flag = true)
			{
				printf("'%s': '%s'", c_node->key,
				       c_node->value);
				c_node = c_node->next;
				if (c_node != NULL)
					printf(", ");
			}
		}
	}
	printf("}\n");
}
