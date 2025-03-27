ques 1 (deleted node in a linked list )
TC=O(1)
SC=O(1)
class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val = node->next->val;
        node->next = node->next->next;
    }
};

ques 2 (linked list insertion at end )
TC=O(n)
SC=O(1)

class solution {
public:
ListNode* insertAtEnd(ListNode* head, int value) {
    ListNode* newNode = new ListNode(value);
    if (!head)  return newNode;
    
     ListNode* current = head;
      while (current->next) {
        current = current->next;
    }
     current->next = newNode;
      return head;
  }
};

