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
    ListNode* middle(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != nullptr && fast->next != nullptr){
            fast = fast->next->next;
            slow = slow->next;
        }

        return slow;
    }

    ListNode* reverse(ListNode* head){
        if(head == nullptr || head->next == nullptr) return head;

        ListNode* prev = nullptr;
        ListNode* curr = head;

        while(curr){
            ListNode* nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }
        return prev;
    }
    void reorderList(ListNode* head) {
        
        // for this i can use the fast and slow pointer and use reverse the link list and then merging it with slow pointers
        if (!head || !head->next) return;
        ListNode* mid = middle(head);
        ListNode* temp = head;
        

        ListNode* rev = reverse(mid->next);
        mid->next = nullptr;
        while(rev != nullptr){
            // Save the next nodes before overwriting pointers
            ListNode* temp_nxt = temp->next;
            ListNode* rev_nxt = rev->next;
            
            // Alternate the nodes
            temp->next = rev;
            rev->next = temp_nxt;
            
            // Move forward
            temp = temp_nxt;
            rev = rev_nxt;
        }
    }
};
