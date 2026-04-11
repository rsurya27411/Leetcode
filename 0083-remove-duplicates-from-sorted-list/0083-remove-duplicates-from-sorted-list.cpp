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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL)
        return nullptr;
        ListNode* ptr=head;
        ListNode* temp=head->next;
        while(temp!=NULL)
        {
            if(ptr->val == temp->val)
            {
                ListNode* del=temp;
                temp=temp->next;
                delete del;
                ptr->next=temp;
            }
            else
            {
                ptr=temp;
                temp=temp->next;
            }
        }
        return head;
    }
};