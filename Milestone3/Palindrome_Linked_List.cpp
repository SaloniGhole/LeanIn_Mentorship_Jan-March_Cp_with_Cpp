bool isPalindrome(ListNode* head) {
        ListNode * fast = head;
        ListNode * slow = head;
        
        while(fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode * curr = slow;
        ListNode * prev = NULL;
        ListNode * nextNode;
        
        while(curr != NULL)
        {
            nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
            
        }
        fast = head;
        while(prev != NULL)
        {
            if(fast->val != prev->val)
                return false;
            fast = fast->next;
            prev = prev->next;
        }
        return true;
    }
