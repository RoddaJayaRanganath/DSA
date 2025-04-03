void delete_first_node(struct node **head)
{
    if(*head == NULL)
    {
        printf("NO EXISTING LINKED LIST : ");
        return;
    }
    struct node *temp = *head;
    *head = temp->next;
    free(temp); // deallocate memory;
    temp = NULL; // remove dangling pointer ;
}