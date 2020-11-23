#ifndef __TREE__H__
#define __TREE__H__

#include <stdio.h>
#include <stdlib.h>

typedef struct Tree
{
    int value;
    struct Tree *tleft;
    struct Tree *tright;
    struct Tree *parent;
}Tree;

Tree *new_tree(int x);
void clean_tree(Tree *tr);
Tree *join_tree(Tree *left, Tree *right, int node);
void print_tree_prefix(Tree *tr);
int count_tree_nodes(Tree *tr);


#endif