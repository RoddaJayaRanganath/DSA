void  generate_loop(struct node **head,,struct node **new1,int deta,int i,int size)
{
    // creating the loop;
    // by folloing steps;
    // linked list size should be more than 4;
    // or you can customize as wanna;
    struct node *new = malloc(sizeof(struct node*));
    new->data = deta;
    new->next = NULL;
    
    if(*head == NULL)
    {
        *head=new;
    }
    else
    {
        struct node *temp = *head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new;
        // step1 :- third node addressing is storing in new1 node;
        if(i==2)
        {
            *new1 = new;
        }
    }
    if(i == size-1)
    {
        // last node is linking with third node by a new1 node;
        new->next = *new1;
    }
}