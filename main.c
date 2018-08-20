#include <stdio.h>
#include <math.h>

/**
 * Calculates power in O(lg(n)) time complexity
 */
unsigned int pow_exp(unsigned int base, unsigned int exp) {
    int result = 1;
    while (exp) {
        if (exp & 1)
            result *= base;
        base *= base;
        exp = exp >> 1;
    }
    return result;
}

int main() {
    /**
     * treeType   The number of children each non-leaf node must have
     * nodes      The total number of nodes present in the tree
     * height     The height of the tree, root lies at 1
     * leafNodes  Total number of leaf nodes
     */
    unsigned int treeType, nodes, height, leafNodes;
    
    /**
     * The algorithm only works if each node is connected to either 0 or 'treeType' numbers of childs.
     * treeType should be greater than 1, otherwise division by log(treeType) will yeild error.
     * nodes must be greater than 1, because we need to calculate log(nodes).
     */
    printf("Enter type of tree (> 1): ");
    scanf("%d", &treeType);
    printf("Enter number of nodes (> 0): ");
    scanf("%u", &nodes);
    
    if(treeType <= 1 || nodes <= 0)
        printf("Cannot compute\n");
    else {
        height = (unsigned int) floor(log(nodes)/log(treeType)) + 1; // Assuming height starts with 1
        printf("Height of tree: %d\n", height);

        /**
         * Main algorithm
         * Leaf nodes = Total nodes - Total nodes except last level
         * If, N is total nodes
         *     X is the number of children a node can have
         *     H is the height of the tree
         * then, total nodes except last node = (X^(H-1) - 1)/(X - 1)
         * and, leaf nodes = N - (X^(H-1) - 1)/(X - 1)
         */
        leafNodes = nodes - (pow_exp(treeType, height - 1) - 1)/(treeType - 1);
        printf("Total leaf nodes: %u\n", leafNodes);
    }
    return 0;
}