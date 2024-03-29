#ifndef list_h
#define list_h
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 */
typedef struct list_s
{
char *str;
unsigned int len;
struct list_s *next;
} list_t;

int _putchar(char c);
size_t print_list(const list_t *h);
list_t *add_node(list_t **head, const char *str);
int _strlength(char *str);
size_t list_len(const list_t *h);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
void beforemain(void);
#endif
