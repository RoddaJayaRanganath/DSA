void insert_at_last(struct node **head,int deta)
{
    // new node creation;
    struct node *neww =  (struct node *)malloc(sizeof(struct node));
    neww->data = deta;
    neww->next = NULL;
    
    // linking the node;
    if(*head == NULL)
    {
        *head = neww;
    }
    else
    {
        // adding every node at first;
        neww->next = *head;
        *head = neww;
    }
}
