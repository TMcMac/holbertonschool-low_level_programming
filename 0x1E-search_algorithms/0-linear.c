#include "search_algos.h"
/**
 *
 *
 *
 */


int linear_search(int *array, size_t size, int value)
{
  unsigned int i = 0;

  if (array == NULL)
    return (-1);

  while (i < size)
  {
    printf("Value checked array[%d] = [%d]\n", i, array[i]);
    if (array[i] == value)
      return (i);
    else
    {
      i++;
    }
  }
  return (-1);
}