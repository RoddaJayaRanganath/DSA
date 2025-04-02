void find_head_in_circular(struct node **head)
{
    if(*head == NULL)
        printf("NO LINKED LIST EXISTS...!");
    else
    {
        struct node *temp1 = *head;
        while(temp1->next!=*head)
        {
           temp1 = temp1->next;
        }
       printf("we found the head in the circular linked list : ");
    }
}