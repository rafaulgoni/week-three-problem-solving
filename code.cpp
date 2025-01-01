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
