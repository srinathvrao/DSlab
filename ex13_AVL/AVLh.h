#include<stdio.h> 
#include<stdlib.h> 
  
// An AVL tree node 
struct Node 
{ 
    char name[15]; 
    struct Node *left; 
    struct Node *right; 
    int height; 
};
