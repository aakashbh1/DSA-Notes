Insertion in AVL Tree:
To make sure that the given tree remains AVL after every insertion, we must augment the standard BST insert operation to perform some re-balancing. 
Following are two basic operations that can be performed to balance a BST without violating the BST property (keys(left) < key(root) < keys(right)). 

Left Rotation 
Right Rotation
T1, T2 and T3 are subtrees of the tree, rooted with y (on the left side) or x (on the right side)     
      
     y                               x
    / \     Right Rotation          /  \
   x   T3   - - - - - - - >        T1   y 
  / \       < - - - - - - -            / \
 T1  T2     Left Rotation            T2  T3
 
Keys in both of the above trees follow the following order 
keys(T1) < key(x) < keys(T2) < key(y) < keys(T3)
So BST property is not violated anywhere.
Steps to follow for insertion:
Let the newly inserted node be w 

Perform standard BST insert for w. 
Starting from w, travel up and find the first unbalanced node. Let z be the first unbalanced node, y be the child of z that comes on the path from w to z and x be the grandchild of z that comes on the path from w to z. 
Re-balance the tree by performing appropriate rotations on the subtree rooted with z. There can be 4 possible cases that need to be handled as x, y and z can be arranged in 4 ways.
Following are the possible 4 arrangements: 
y is the left child of z and x is the left child of y (Left Left Case) 
y is the left child of z and x is the right child of y (Left Right Case) 
y is the right child of z and x is the right child of y (Right Right Case) 
y is the right child of z and x is the left child of y (Right Left Case)
Following are the operations to be performed in above mentioned 4 cases. In all of the cases, we only need to re-balance the subtree rooted with z and the complete tree becomes balanced as the height of the subtree (After appropriate rotations) rooted with z becomes the same as it was before insertion.

1. Left Left Case 

T1, T2, T3 and T4 are subtrees.
         z                                      y 
        / \                                   /   \
       y   T4      Right Rotate (z)          x      z
      / \          - - - - - - - - ->      /  \    /  \ 
     x   T3                               T1  T2  T3  T4
    / \
  T1   T2
2. Left Right Case 

     z                               z                           x
    / \                            /   \                        /  \ 
   y   T4  Left Rotate (y)        x    T4  Right Rotate(z)    y      z
  / \      - - - - - - - - ->    /  \      - - - - - - - ->  / \    / \
T1   x                          y    T3                    T1  T2 T3  T4
    / \                        / \
  T2   T3                    T1   T2
3. Right Right Case 

  z                                y
 /  \                            /   \ 
T1   y     Left Rotate(z)       z      x
    /  \   - - - - - - - ->    / \    / \
   T2   x                     T1  T2 T3  T4
       / \
     T3  T4
4. Right Left Case 

   z                            z                            x
  / \                          / \                          /  \ 
T1   y   Right Rotate (y)    T1   x      Left Rotate(z)   z      y
    / \  - - - - - - - - ->     /  \   - - - - - - - ->  / \    / \
   x   T4                      T2   y                  T1  T2  T3  T4
  / \                              /  \
T2   T3                           T3   T4



//DELETE
Let w be the node to be deleted 

Perform standard BST delete for w. 
Starting from w, travel up and find the first unbalanced node. Let z be the first unbalanced node, y be the larger height child of z, and x be the larger height child of y. Note that the definitions of x and y are different from insertion here. 
Re-balance the tree by performing appropriate rotations on the subtree rooted with z. There can be 4 possible cases that needs to be handled as x, y and z can be arranged in 4 ways. Following are the possible 4 arrangements: 
y is left child of z and x is left child of y (Left Left Case) 
y is left child of z and x is right child of y (Left Right Case) 
y is right child of z and x is right child of y (Right Right Case) 
y is right child of z and x is left child of y (Right Left Case)
