# Red-Black-Tree-Data-Structure

## Introduction

Red-black trees are an evolution of binary search trees that aim to keep the tree balanced without affecting the complexity of the primitive operations. This is done by coloring each node in the tree with either red or black and preserving a set of properties that guarantee that the deepest path in the tree is not longer than twice the shortest one.
A red-black tree is a binary search tree with the following properties:
1. Every node is colored with either red or black.
2. All leaf (nil) nodes are colored with black; if a node’s child is missing then we will assume that it has a nil child in that place and this nil child is always colored black.
3. Both children of a red node must be black nodes.
4. Every path from a node n to a descendent leaf has the same number of black nodes (not counting node n). We call this number the black height of n, which is denoted by bh(n).
Red black tree have most of the Binary search tree operation. Most of the BST operations (e.g., search, max, min, insert, delete.. etc) take O(h) time where h is the height of the BST. The cost of these operations may become O(n) for a skewed Binary tree. If we make sure that height of the tree remains O(Log n) after every insertion and deletion, then we can guarantee an upper bound of O(Log n) for all these operations. The height of a Red-Black tree is always O(Log n) where n is the number of nodes in the tree.

## Source File

The source code is written in **C++**. All the source file are included. We tried to make the program as simple as we can. We make an user friendly interface to use the program. When you use the program you can easily understand how data stracture is work.

To use this program first clone the repo or download the zip file from here.


Go to the 
    *Red-Black Tree code folder -> bin -> debug*
    

In debug folder you can find a executable file named **Red-Black Tree.exe** . Run this file.
  
## OR,

You can import the project in **CodeBlock IDE**.

## Program Images

**Interface**

![Interface](https://github.com/kmhmubin/Red-Black-Tree-Data-Structure/blob/master/Doc%20Images/red1.jpg)


**Check Tree**

![Check Tree](https://github.com/kmhmubin/Red-Black-Tree-Data-Structure/blob/master/Doc%20Images/red2.jpg)


**Insert Node**

![Insert Node](https://github.com/kmhmubin/Red-Black-Tree-Data-Structure/blob/master/Doc%20Images/red3.jpg)


**Display Tree**

![Display Tree](https://github.com/kmhmubin/Red-Black-Tree-Data-Structure/blob/master/Doc%20Images/red4.png)


**Search Node & Delete Node**

![Search Delete Node](https://github.com/kmhmubin/Red-Black-Tree-Data-Structure/blob/master/Doc%20Images/red5.png)
