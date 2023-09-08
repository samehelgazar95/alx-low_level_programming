#include <stdlib.h>
#include <string.h>

/**
 * _realloc- reallocates a memory block
 * @ptr: ptr
 * @old_size: old size
 * @new_size: new size
 * Return: ptr or NULL
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newPtr;

	if (old_size == new_size && ptr != NULL)
	{
		return (ptr);
	}
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else if (old_size < new_size && ptr != NULL)
	{
		newPtr = malloc(new_size);

		if (newPtr == NULL)
			return (NULL);

		memcpy(newPtr, ptr, old_size);
		free(ptr);
	}
	else if (ptr == NULL)
	{
		newPtr = malloc(new_size);
	}

	return (newPtr);
}
