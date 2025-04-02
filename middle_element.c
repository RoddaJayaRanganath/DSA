void middle_element(struct node **head)
{
    if(*head == NULL)
        printf("NO LINKED LIST EXISTS...!");
    else
    {
       struct node *first = *head;
       struct node *second = *head;
       
       //logic;
       while(second != NULL && second->next != NULL)
       {
           first = first->next;
           second = second->next->next;
       }
       printf("the middle node : %d",first->data);
    }
}