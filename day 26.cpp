ques 1 (doubly linked list insertion at given position)
TC=O(n)
SC=O(1)

/* Definition for a doubly-linked list node
 struct Node {
   int val;
   Node* next;
   Node* prev;
    
    Node(int x) {
        val = x;
        next = nullptr;
        prev = nullptr;
    }
};*/

class Solution {
public:
    Node *addNode(Node* head, int pos, int val) {
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

ques 2 ( search in linked list)
TC=O(n)
SC=O(1)

/* linked list node
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

class Solution {
public:
    bool searchKey(int n , ListNode* head, int key) {
        while (head != nullptr) {
            if (head->val == key){
                return true;
            }else {
            head = head->next;
        }
      } 
        return false;
    }
};
