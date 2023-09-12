bool checkLoop(Node* &head){
    if(head == NULL){
        return false;
    }
    Node* slow = head;
    Node* fast = head;
    while(fast != NULL){
        fast = fast -> next;
        if(fast != NULL){
            fast = fast->next;
            slow = slow->next;
        }
        // loop is present
        if(slow == fast){
            return true;
        }
    }
    // loop is not present
    return false;
}

Node* findStart(Node* &head){
    if(head == NULL){
        return head;
    }
    Node* slow = head;
    Node* fast = head;
    while(fast != NULL){
        fast = fast -> next;
        if(fast != NULL){
            fast = fast->next;
            slow = slow->next;
        }
        // loop is present
        if(slow == fast){
            // Move slow to head
            slow = head;
            break;
        }
    }
    while(slow!=fast){
        // Move both by 1 step
        slow = slow->next;
        fast = fast->next;
    }
    return slow;
}


void removeLoop(Node* &head){
    if(head == NULL){
        return;
    }
    Node* slow = head;
    Node* fast = head;
    while(fast != NULL){
        fast = fast -> next;
        if(fast != NULL){
            fast = fast->next;
            slow = slow->next;
        }
        // loop is present
        if(slow == fast){
            // Move slow to head
            slow = head;
            break;
        }
    }
    Node *prev = fast;
    while(slow!=fast){
        // Move both by 1 step
        prev = fast;
        slow = slow->next;
        fast = fast->next;
    }
    // Removal step
    prev->next = NULL;
}

void removeLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any nodes
        Node* slow=head;
        Node* fast=head;
        
        if(!head || !head->next)
        return;
        
        while(fast&&fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
            
            if(slow==fast)
            {
                if(slow==head)
                {
                    while(fast->next!=slow)
                    {
                        fast=fast->next;
                    }
                    
                    fast->next=NULL;
                    
                    return;
                }
                
                slow=head;
                
                while(slow->next!=fast->next)
                {
                    slow=slow->next;
                    fast=fast->next;
                }
                
                fast->next=NULL;
                return;
                
                
                
            }
        }
    }
