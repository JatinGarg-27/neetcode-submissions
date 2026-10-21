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
        ListNode* temp1 = list1;
        ListNode* temp2 = list2;

        if(list1 == nullptr && list2 != nullptr) return list2;
        if(list2 == nullptr && list1 != nullptr) return list1;

        if(!list1 && !list2) return nullptr;
        int an = 0;
        if(temp1->val < temp2->val){
            an = temp1->val;
            temp1 = temp1->next;
        }
        else{
            an = temp2->val;
            temp2 = temp2->next;
        }
        ListNode* head = new ListNode(an);
        ListNode* temp = head;
        while(temp1 != nullptr && temp2 != nullptr){
            int a = temp1->val;
            int b = temp2->val;

            if(a < b){
                temp->next = new ListNode(a);
                temp = temp->next;
                temp1 = temp1->next;
            }
            else{
                temp->next = new ListNode(b);
                temp = temp->next;
                temp2 = temp2->next;
            }
        }

        while(temp1){
            int a = temp1->val;
            temp->next = new ListNode(a);
            temp = temp->next;
            temp1 = temp1->next;
        }
        while(temp2){
            int a = temp2->val;
            temp->next = new ListNode(a);
            temp = temp->next;
            temp2 = temp2->next;
        }

        return head;
    }
};
