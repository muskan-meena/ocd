

class Solution {
public:
    Node* insertAfter(Node* head, int pos, int val) {
        Node* newNode = new Node(val);
        Node* curr = head;
        
        for (int i = 0; i < pos && curr != nullptr; i++) {
            curr = curr->next;
        }
        if (!curr) return head;

        
        newNode->next = curr->next;
        newNode->prev = curr;
        
        if (curr->next) {
            curr->next->prev = newNode;
        }
        
        curr->next = newNode;
        
        return head;
    }
};