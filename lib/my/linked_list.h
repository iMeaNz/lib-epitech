/*
** EPITECH PROJECT, 2021
** lib-epitech
** File description:
** linked_list.h
*/

#ifndef LINKED_LIST
    #define LINKED_LIST

typedef struct linked_list {
    char *data;
    struct linked_list *next;
} linked_list_t;
#endif
