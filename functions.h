struct node {
    struct node *next;
    int x;
};

struct node* New();
struct node* PushBack(struct node *head, struct node* tail, int* size, int x);
struct node* get(struct node *tail,int index);
void Sort(struct node* tail, int size);
void Print (struct node* tail, int size);