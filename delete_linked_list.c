void delete_linked_list(struct node **head)
{
    if(*head == NULL)
    {
        printf("no problem, linked list is already deleted !");
        return;
    }
    else
    {
        // deleting every node;
        struct node *temp = *head;
        while(temp!=NULL)
        {
            *head = temp->next;
            free(temp);
            temp = *head;
        }
        printf("we deleted linked list !");
    }
}