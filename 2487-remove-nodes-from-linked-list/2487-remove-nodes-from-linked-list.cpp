class Solution {
public:
    
    ListNode* reverse(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        while (curr) {
            ListNode* nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }
        return prev;
    }

    ListNode* removeNodes(ListNode* head) {
      
        head = reverse(head);

        
        ListNode* dummy = new ListNode(0);
        ListNode* tail = dummy;
        int maxSoFar = INT_MIN;

        ListNode* curr = head;
        while (curr) {
            if (curr->val >= maxSoFar) {
                maxSoFar = curr->val;
                tail->next = curr;
                tail = curr;
            }
            curr = curr->next;
        }
        tail->next = nullptr; 

        
        return reverse(dummy->next);
    }
};
