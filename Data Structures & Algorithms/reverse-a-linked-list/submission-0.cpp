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

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        // for this first thing that came into my mind right now is use a vector store all of the values of linked list in this and just iterate in new linked list but the problem with that is one thing it uses space complexity of o(n) and most important we need to do it in given linkedlist only not by creating a new one

        if(head == nullptr || head->next == nullptr) return head;
        ListNode* curr = head;
        ListNode* prev = nullptr;

        ListNode* temp = nullptr;
        while(curr){
            temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        return prev;
    }
};
