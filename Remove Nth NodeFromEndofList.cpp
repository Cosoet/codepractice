    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode* dummy = new ListNode(-1);
        dummy->next = head;
        
        ListNode* curr = dummy->next; 
        int len = 0;

        // Find the lenght 
        while(curr != NULL){
            len ++;
            curr = curr->next;
        }
        
        // Find the (L - n) th node
        curr = dummy->next; 
        int k = len - n + 1;
        
        ListNode* prevNode = NULL;

        if(k == 1){
            return head->next;
        }
        
        while(curr != NULL){
            k--;
            
            if(k == 0){
                prevNode->next = curr->next; 
                break;
            }
            
            prevNode = curr;
            curr = curr->next;
        }
        

        return head;
    }
