#0x12. C - Singly linked lists
 Foundations - Low-level programming & Algorithm ― Data structures and Algorithms
Holberton Cohort 11 (Tulsa 120)

0. Print list
Write a function that prints all the elements of a list_t list.
Prototype: size_t print_list(const list_t *h);
Return: the number of nodes
Format: see example
If str is NULL, print [0] (nil)
You are allowed to use printf
File: 0-print_list.c



1. List length
Write a function that returns the number of elements in a linked list_t list.
File: 1-list_len.c



2. Add node
Write a function that adds a new node at the beginning of a list_t list.
Return: the address of the new element, or NULL if it failed
str needs to be duplicated
You are allowed to use strdup
File: 2-add_node.c



3. Add node at the end mandatory
Write a function that adds a new node at the end of a list_t list.
Return: the address of the new element, or NULL if it failed
str needs to be duplicated
You are allowed to use strdup
File: 3-add_node_end.c



4. Free list mandatory
Write a function that frees a list_t list.
File: 4-free_list.c