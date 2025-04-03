void reverse_linked_list(struct node **head)
{
    if(*head == NULL)
    {
        printf("no existing linked list !");
        return;
    }
    else
    {
        // we need three struct vari's;
        struct node *prev = NULL;
        struct node *cur = *head;
        struct node *nxt = NULL;
        
        while(cur!=NULL)
        {
            // logic for the reversing the linked_list;
            nxt = cur->next;
            cur->next = prev;
            prev = cur;
            cur = nxt;
        }
        *head = prev;
    }
}