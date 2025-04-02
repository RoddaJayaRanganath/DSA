void mul_of_linked_list(struct node **head)
{
    int mull = 1;
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
            // to find the multiplication of the linked list;
            mull = (mull)*(temp->data);
            temp = temp->next;
        }
    }
    printf("multiplication of the linked list = %d",mull);
}