struct list
{
    int field;
    struct list* next;
};

struct list* Initialise(int a);
struct list* AddToList(struct list* current, int number);
struct list * DeleteFromList(struct list *current, struct list *root);
void PrintList(struct list *current);
void FromBuffer(int buffer[5], struct list* list_1);