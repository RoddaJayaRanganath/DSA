void insert_at_position(struct node **head,int deta,int index)
{
    // new node creation;
    struct node *neww = (struct node*)malloc(sizeof(struct node));
    neww->data = deta;
    neww->next = NULL;
    
    if(*head== NULL)
    {
        printf("no linked list exsit! ");
        return;
    }
    // insertion if index is zero;
    if(index==0)
    {
        neww->next = *head;
        *head = neww;
    }
    else
    {
        // insertion if index is not zero;
        int i = 0;
        struct node *temp = *head;
        struct node *prev = *head;
        
        while(temp!=NULL)
        {
            if(i==index)
            {
                neww->next = temp;
                prev->next = neww;
                break;
            }
            i++;
            prev = temp;
            temp = temp->next;
        }
    }
}