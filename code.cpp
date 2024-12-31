#include <bits/stdc++.h> 
using namespace std;

class Node
{
    public: 
        int val;
        Node* next;
        Node* prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

int main() {
   
    return 0;
}

// class Solution {
// public:
//     ListNode* deleteMiddle(ListNode* head) {
//         if (!head || !head->next) {
//             return NULL;
//         }

//         ListNode* slow = head;
//         ListNode* fast = head;
//         ListNode* prev = NULL;

//         while (fast && fast->next) {
//             prev = slow;
//             slow = slow->next;
//             fast = fast->next->next;
//         }

//         if (prev) {
//             prev->next = slow->next;
//         }

//         return head;
//     }
// };

// class MyLinkedList {
// private:
//     ListNode* head;
//     int size;

// public:
//     MyLinkedList() {
//         head = NULL;
//         size = 0;
//     }
    
//     int get(int index) {
//         if (index < 0 || index >= size) {
//             return -1;
//         }
//         ListNode* current = head;
//         for (int i = 0; i < index; ++i) {
//             current = current->next;
//         }
//         return current->val;
//     }
    
//     void addAtHead(int val) {
//         ListNode* newNode = new ListNode(val);
//         newNode->next = head;
//         head = newNode;
//         ++size;
//     }
    
//     void addAtTail(int val) {
//         ListNode* newNode = new ListNode(val);
//         if (head == NULL) {
//             head = newNode;
//         } else {
//             ListNode* current = head;
//             while (current->next != NULL) {
//                 current = current->next;
//             }
//             current->next = newNode;
//         }
//         ++size;
//     }
    
//     void addAtIndex(int index, int val) {
//         if (index < 0 || index > size) {
//             return;
//         }
//         if (index == 0) {
//             addAtHead(val);
//         } else {
//             ListNode* newNode = new ListNode(val);
//             ListNode* current = head;
//             for (int i = 0; i < index - 1; ++i) {
//                 current = current->next;
//             }
//             newNode->next = current->next;
//             current->next = newNode;
//             ++size;
//         }
//     }
    
//     void deleteAtIndex(int index) {
//         if (index < 0 || index >= size) {
//             return;
//         }
//         if (index == 0) {
//             ListNode* temp = head;
//             head = head->next;
//             delete temp;
//         } else {
//             ListNode* current = head;
//             for (int i = 0; i < index - 1; ++i) {
//                 current = current->next;
//             }
//             ListNode* temp = current->next;
//             current->next = temp->next;
//             delete temp;
//         }
//         --size;
//     }
// };