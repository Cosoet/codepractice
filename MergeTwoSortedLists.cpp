    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        ListNode* result = new ListNode(0);
        ListNode* curr = result;

        while(1){
            
            if((l1 == NULL) && (l2 == NULL)){
                break;
            }
            
            if(l1 == NULL) {
                curr->next = l2; break;
            }

            if(l2 == NULL){
                curr->next = l1; break;
            }
            
            if(l1->val < l2->val ){
                // pick from l1
                curr->next = l1; //new ListNode(l1->val);
                l1 = l1->next;
                curr = curr->next;
                
            }else{
                // pick from l2
                curr->next = l2; //new ListNode(l2->val);
                l2 = l2->next;
                curr = curr->next;                
            }
            
        }
        
        return result->next;       
    }
