# leaf-nodes-x-child-tree
An algorithm to calculate total leaf nodes in a complete X-children tree, without recursive addition, from total number of nodes provided. Each non-leaf node of the tree must have a common number of children, greater than one.

## Formula
The total number of leaf nodes can be given the following expression

![formula](http://www.sciweavers.org/tex2img.php?eq=Leaf%20Nodes%20%3D%20N%20-%20%20%5Cfrac%7BX%5E%7BH-1%7D%20-%201%7D%7BX%20-%201%7D%20&bc=White&fc=Black&im=jpg&fs=18&ff=arev&edit=0)

```
Leaf Nodes = N - {[X^(H-1) - 1]/[X - 1]}
where, N is the total number of nodes
       X is the number of non-zero child a node can have
       H is the height of the tree, starting from index 1
       [X^(H-1) - 1]/[X - 1] is the total number of nodes, except the nodes at last level
```

## Proof
We know that
![sigma_r(0,n){X^r}](http://www.sciweavers.org/tex2img.php?eq=%20%5Csum_%7Br%3D0%7D%5E%7Bn-1%7D%20X%20%5E%7Br%7D%20%20&bc=White&fc=Black&im=jpg&fs=12&ff=arev&edit=0)
is equal to the number of nodes in completely filled X-child tree up to n-1 level.

We can prove that

![{X^(H-1) - 1/X - 1}](http://www.sciweavers.org/tex2img.php?eq=%5Csum_%7Br%3D0%7D%5E%7Bn-1%7D%20X%20%5E%7Br%7D%20%20%3D%20%20%5Cfrac%7BX%5E%7Bn%7D%20-%201%7D%7BX%20-%201%7D%20&bc=White&fc=Black&im=jpg&fs=12&ff=arev&edit=0) 

using the principle of mathematical induction.

Subtracting this value from the total number of nodes (N) will give the number of nodes present in the last level.
