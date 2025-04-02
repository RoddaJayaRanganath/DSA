void min_of_linked_list(struct node **head)
{
    // to find min val of linked list;
    // first assign the first node value;
    int min = (*head)->data;
    if(*head == NULL)
    {
        printf("no linked list !");
        return;
    }
    else
    {
        struct node *temp = *head;
        while(temp!=NULL)
        {
            // to get min;
            if(min>temp->data)
            {
                min = temp->data;
            }
            temp = temp->next;
        }
    }
    printf("min = %d",min);
}