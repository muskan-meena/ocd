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



// Definition for singly-linked list node
struct Node {
    int data;
    Node* next;
    
    Node(int val) { 
        data = val; 
        next = nullptr; 
    }
};

// Function to insert a node at the end of the linked list
Node* insertAtEnd(Node* head, int x) {
    Node* newNode = new Node(x);
    
    // If the linked list is empty
    if (head == nullptr) {
        return newNode;
    }

    Node* temp = head;
    
    // Traverse to the last node
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    
    // Insert the new node at the end
    temp->next = newNode;

    return head;
}

