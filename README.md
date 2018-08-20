# leaf-nodes-x-child-tree
An algorithm to calculate total leaf nodes in a complete X-children tree, without recursive addition, from total number of nodes provided. Each non-leaf node of the tree must have a common number of children, greater than one.

## Formula
The total number of leaf nodes can be given the following expression

```
                      H - 1     
                     X      - 1 
Leaf Nodes  =  N  -  ---------- 
                        X - 1   
where, N is the total number of nodes
       X is the number of non-zero child a node can have
       H is the height of the tree, starting from index 1
       [X^(H-1) - 1]/[X - 1] is the total number of nodes, except the nodes at last level
```

## Proof
We know that
```
  __ n - 1  r 
 \         X  
 /__ r = 0    
```
is equal to the number of nodes in completely filled X-child tree up to n-1 level.

We can prove that

```
                  H - 1
 __ n - 1  r     X      - 1
 \         X  =  ----------
 /__ r = 0          X - 1
```

using the principle of mathematical induction.

Subtracting this value from the total number of nodes (N) will give the number of nodes present in the last level.
