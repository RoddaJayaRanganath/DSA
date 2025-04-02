void last_node(struct node **head)
{
    if(*head == NULL)
        printf("NO LINKED LIST EXISTS...!");
    else
    {
        struct node *temp = *head;
        while(temp->next!=NULL)
        {
            temp = temp->next;
        }
        // last node;
        printf("last_node : %d",temp->data);
    }
}