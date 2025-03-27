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
Node* insertAtEnd(Node* head, int x) {
    Node* newNode = new Node(x);
    if (head == nullptr) {
        return newNode;
    }
     Node* temp = head;
    
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    
    temp->next = newNode;

    return head;
  }
};

