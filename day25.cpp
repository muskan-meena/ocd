ques 1 (deleted node in a linked list )
TC=O(1)
SC=O(1)
class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val = node->next->val; 
        ListNode* temp = node->next; 
        node->next = node->next->next;
        delete temp;  
    }
};

ques 2 (
