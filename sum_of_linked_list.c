void sum_of_linked_list(struct node **head)
{
    int sum = 0;
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
            // to find the sum of the linked list;
            sum = (sum)+(temp->data);
            temp = temp->next;
        }
    }
    printf("sum of the linked list= %d",sum);
}