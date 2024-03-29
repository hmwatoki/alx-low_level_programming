#ifndef LISTS_H
#define LISTS_H
/*
 * File: lists.h
 * Auth: hmwatoki
 * Description: Header file containing declarations for all functions
 *       used in 0x17-doubly_linked_lists project.
 */
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 *
 */
typedef struct dlistint_s
{
int n;
struct dlistint_s *prev;
struct dlistint_s *next;
} dlistint_t;
#include <stdio.h>
size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
#endif
