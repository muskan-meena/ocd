ques 1 (has a cycle)
TC=O(n)
SC=O(1)

class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (!head || !head->next) return false; 
        
        ListNode *slow = head;  
        ListNode *fast = head; 

        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) return true;
        }

        return false; 
    }
};

ques 2 ( middle node of the linked list ) 
TC=O(n)
SC=O(1)

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast && fast->next) {
            slow = slow->next;      
            fast = fast->next->next;  
        }

        return slow;  
    }
};