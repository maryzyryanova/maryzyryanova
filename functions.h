struct node{
    int field;
    int count;
    struct node* left;
    struct node* right;
};

struct node* Add(int x, struct node* tree);
int Sum(struct node* tree, int sum);
int Height(struct node* tree, int length);
void Print(struct node* tree);