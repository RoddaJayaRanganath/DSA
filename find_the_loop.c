void find_loop(struct node **head)
{
    if(*head == NULL)
        printf("NO EXSITING LINKED LIST...!");
    else
    {
        struct node *slow = *head;
        struct node *fast = *head;
        while(fast!=NULL&&fast->next!=NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
            // to find the loop;
            if(slow==fast)
            {
                printf("we found the loop\n");
                // to find the start of loop;
                slow = *head;
                while(slow!=fast)
                {
                    slow = slow->next;
                    fast = fast->next;
                }
                printf("start of the node ; %d",slow->data);
                break;
            }
        }
    }
}