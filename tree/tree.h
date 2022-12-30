typedef struct node {
    int value;
    struct node *left, *right;
} Node;

Node *genNode(int value, Node *left,
	      Node *right);
Node *treeAND(Node *tree1, Node *tree2);
Node *treeOR(Node *tree1, Node *tree2);
