void delete_specific_node(struct node **head,int index)
{
    if(*head == NULL)
    {
        printf("NO EXISTING LINKED LIST : ");
        return;
    }
    struct node *temp = *head;
    struct node *prev = *head;
    int i = 0;
    // if specific node is actually first node;
    if(i==index)
    {
        struct node *temp = *head;
        *head = temp->next;
        free(temp);
        temp = NULL;
        return;
    }
    while(temp->next!=NULL)
    {
        // if specific node is actually;
        // not first and last node;
        if(i == index)
        {
            prev->next = temp->next;
            free(temp);
            temp = NULL;
            return;
        }
        i++;
        prev = temp;
        temp = temp->next;
    }
    // if specific node is actully last node;
    prev->next = NULL;
    free(temp);
}