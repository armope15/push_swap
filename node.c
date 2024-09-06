#include<stdlib.h>
#include"node.h"

t_node *node_new(int value , t_node *prev_node){
    t_node *new_node;

    new_node = (t_node *)malloc(sizeof(t_node));
    if (new_node == NULL){
        return (NULL);
    }

    new_node->number = value;
    new_node->next = NULL;

    if(prev_node != NULL){
        prev_node->next = new_node;
    }

    return (new_node);
}

t_node *node_last( t_node *node){
    while (node->next != NULL){
        node = node->next;
    }
    return (node);
}

