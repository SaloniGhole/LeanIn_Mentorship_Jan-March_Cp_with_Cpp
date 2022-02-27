 bool hasCycle(ListNode *head) {
        if(head == NULL || head->next == NULL)
            {
                return false;
            }
        
        ListNode * fast = head;
        ListNode * slow = head;
        
        fast = fast->next->next;
        
        while(fast != NULL && slow != fast && fast->next != NULL)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        if(fast == NULL || fast->next == NULL)
        {
            return false;
        }
        return true;
    }
