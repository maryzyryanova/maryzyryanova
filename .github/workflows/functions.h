struct list
{
    int field;
    struct list* next;
};

struct list* Initialise(int a);
struct list* AddToList(list* current, int number);
struct list * DeleteFromList(struct list *current, struct list *root);
