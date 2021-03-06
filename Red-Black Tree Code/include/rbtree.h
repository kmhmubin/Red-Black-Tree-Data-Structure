#ifndef RBTREE_H
#define RBTREE_H


struct node
{
    int key;
    node *parent;
    char color;
    node *left;
    node *right;
};

class RBtree
{
    node *root;
    node *q;
public :
    RBtree();
    void insert();
    void insertfix(node *);
    void leftrotate(node *);
    void rightrotate(node *);
    void del();
    node* successor(node *);
    void delfix(node *);
    void disp();
    void display( node *);
    void search();
};

#endif // RBTREE_H
