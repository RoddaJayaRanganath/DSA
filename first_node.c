void first_node(struct node **head)
{
    if(*head == NULL)
        printf("NO LINKED LIST EXISTS...!");
    else
    {
        printf("first node : %d",(*head)->data);
    }
}