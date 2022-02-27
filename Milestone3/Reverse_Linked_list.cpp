ListNode* reverseList(ListNode* head) {
        
        if(head == NULL || head->next == NULL)
            return head;
        ListNode * prev = NULL;
        ListNode * curr = head;
        ListNode * nextNode = curr->next;
        while(curr != NULL)
        {
            curr->next = prev;
            prev = curr;
            curr = nextNode;
            if(curr != NULL)
            nextNode = curr->next;
        }
        
        return prev;
    }
