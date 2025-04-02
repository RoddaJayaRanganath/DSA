// node creation;
struct node
{
    int data;
    // self referential structure;
    // helps in finding next node;
    struct node *next;
};