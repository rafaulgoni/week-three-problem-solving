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
//

// class BrowserHistory {
// public:
//     BrowserHistory(string homepage) {
//         history.push_back(homepage);
//         currentIndex = 0;
//     }
    
//     void visit(string url) {
//         // Clear forward history
//         history.resize(currentIndex + 1);
//         history.push_back(url);
//         currentIndex++;
//     }
    
//     string back(int steps) {
//         currentIndex = max(0, currentIndex - steps);
//         return history[currentIndex];
//     }
    
//     string forward(int steps) {
//         currentIndex = min((int)history.size() - 1, currentIndex + steps);
//         return history[currentIndex];
//     }

// private:
//     vector<string> history;
//     int currentIndex;
// };

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

// class Solution {
// public:
//     ListNode* oddEvenList(ListNode* head) {
//         if (!head) return head;

//         ListNode* odd = head;
//         ListNode* even = head->next;
//         ListNode* evenHead = even;

//         while (even && even->next) {
//             odd->next = even->next;
//             odd = odd->next;
//             even->next = odd->next;
//             even = even->next;
//         }

//         odd->next = evenHead;
//         return head;
//     }
// };

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

// class Solution {
// public:
//     ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
//         ListNode* prevA = list1;
//         for (int i = 0; i < a - 1; ++i) {
//             prevA = prevA->next;
//         }

//         ListNode* afterB = prevA;
//         for (int i = 0; i < b - a + 2; ++i) {
//             afterB = afterB->next;
//         }

//         prevA->next = list2;

//         ListNode* tail2 = list2;
//         while (tail2->next) {
//             tail2 = tail2->next;
//         }

//         tail2->next = afterB;

//         return list1;
//     }
// };

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

// class Solution {
// public:
//     ListNode* swapPairs(ListNode* head) {
//         ListNode dummy(0);
//         dummy.next = head;
//         ListNode* current = &dummy;

//         while (current->next && current->next->next) {
//             ListNode* first = current->next;
//             ListNode* second = current->next->next;

//             first->next = second->next;
//             second->next = first;
//             current->next = second;

//             current = first;
//         }

//         return dummy.next;
//     }
// };
