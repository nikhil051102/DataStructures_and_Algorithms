// Introduction
/**
--> AVL is Adelson-Velskii and Landis also known as a height binary tree.
--> It is height balanced Binary Search Tree
--> Height difference between height of left and right subtrees for every node is less than or equal to 1.
--> Balance Factor = Height of right subtree - Height of left subtree.
--> |B.F| <= 1
--> To make AVL Tree balanced we perform rotations in it.
**/

/**
   Balancing a AVL Tree after insertion
1) Left-Left insertion - Right rotate once wrt the first imbalanced node.
2) Right-Right insertion - Left rotate once wrt the first imbalanced node.
3) Left-Right insertion - Left rotate once and then Right rotate once. Here Left rotation is done wrt child of first imbalanced node which is in path of inserted node and right rotate wrt first imbalanced node of tree which formed after left rotation
4) Right-Left insertion - Right rotate once and then Left rotate once. Here Right rotation is done wrt child of first imbalanced node which is in path of inserted node and left rotate wrt first imbalanced node of tree which formed after right rotation

--> 
**/