int size = 0;
struct node {
    struct node *next;
    int x;
};
struct node *head,*tail;

struct node* New(){
    size++;
    struct node *v;
    v = malloc(sizeof(struct node) * 1);
    v->x = malloc(sizeof(int) * 100);
    v -> next = NULL;
    return v;
}

void push_r(int x) {
    if(size == 0)
    {
        head = tail = New();
        tail -> x = x;
        head -> x = x;
    } else {
        struct node* v = New();
        v->next = tail;
        tail = v;
        v->x = x;
    }
}

struct node* get(int index) {
    struct node * cur = tail;
    while(index--) {
        cur = cur -> next;
    }
    return cur;
}