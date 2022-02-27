 ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode * ptr = new ListNode();
        ptr->next = head;
        ListNode * fast = ptr;
        ListNode * slow = ptr;
        for(int i=0; i<n; i++)
            fast = fast->next;
        while(fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next;
        }
        slow->next = slow->next->next;
        
        return ptr->next;
    }
