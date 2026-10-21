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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // iterating in a one common list 
        vector<int>l;
        ListNode* temp = list1;
        while(temp){
            l.push_back(temp->val);
            temp = temp->next;
        }
        ListNode* te = list2;
        while(te){
            l.push_back(te->val);
            te = te->next;
        }
        if(l.size() == 0 ) return list1;
        sort(l.begin(),l.end());
        ListNode* head = new ListNode(l[0]);
        ListNode* curr = head;
        for(int i = 1 ; i < l.size() ; i++){
            curr->next = new ListNode (l[i]);
            curr = curr->next;
        }
        return head;
    }
};
