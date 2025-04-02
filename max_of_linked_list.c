void max_of_linked_list(struct node **head)
{
    int max = 0;
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
            // to get max;
            if(max<temp->data)
            {
                max = temp->data;
            }
            temp = temp->next;
        }
    }
    printf("max = %d",max);
}