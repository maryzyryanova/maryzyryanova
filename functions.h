struct node{
    int field;
    int count;
    struct node* left;
    struct node* right;
};

struct node* Add(int x, struct node* tree);
struct node* Print(struct node* tree);
int MaxLengthAndSum(struct node* tree, int length, int sum);
int GetLength(struct node* tree, int sum);
