void sec_max_linked_list(struct node **head)
{
    int firstmax = 0;
    // our goal to find the second max;
    int secmax = 0;
    if(*head == NULL)
    {
        printf("no linked list !");
        return;
    }
    else
    {
        struct node *max1 = *head;
        struct node *max2 = *head;
        // first we need to find the first max;
        while(max1 != NULL)
        {
            if(firstmax<max1->data)
            {
                firstmax = max1->data;
            }
            max1 = max1->next;
        }
        // find the second max by avoiding first max;
        while(max2!=NULL)
        {
            if(secmax<max2->data && max2->data != firstmax)
            {
                secmax = max2->data;
            }
            max2 = max2->next;
        }
    }
    printf("second max = %d",secmax);
}