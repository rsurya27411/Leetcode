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
    ListNode* deleteMiddle(ListNode* head) {
        int n=0;
        ListNode* temp=head;
        ListNode* temp1=head->next;
        ListNode* ptr=head;
        while(temp!=NULL)
        {
            n++;
            temp=temp->next;
        }
        if(n==1)return NULL;
        int c=0;
        while(temp1!=NULL)
        {
            if(c==(n/2 -1))
            break;
            else
            c++;
            ptr=temp1;
            temp1=temp1->next;
        }
        ptr->next=temp1->next;
        cout<<ptr->val;
        return head;
    }
};