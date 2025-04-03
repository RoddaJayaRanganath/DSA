void delete_last_node(struct node **head)
{
    if(*head == NULL)
    {
        printf("NO EXISTING LINKED LIST : ");
        return;
    }
    else if((*head)->next==NULL) // what if we have single node in linked_list;
    {
        free(*head);
        *head = NULL;
    }
    struct node *temp = *head;
    struct node *prev = *head;
    while(temp->next!=NULL)
    {
        prev = temp;
        temp = temp->next;
    }
    free(temp); // deallocation memory for last node;
    temp = NULL; // removing the dangling pointer;
    prev->next = temp; // prev->next = NULL;
    
}