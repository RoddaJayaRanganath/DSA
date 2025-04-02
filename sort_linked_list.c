void bubble_sort(struct node **head)
{
    if(*head == NULL)
    {
        printf("no existing linked list !");
        return;
    }
    else
    {
        for(struct node *i = *head;i->next!=NULL;i=i->next)
        {
            for(struct node *j = i->next;j!=NULL;j=j->next)
            {
                // deal with the data;
                // swap them, won't the touch the addresses to swap them;
                if(i->data>j->data)
                {
                    int tempdata = i->data;
                    i->data = j->data;
                    j->data = tempdata;
                }
            }
        }
    }
}
