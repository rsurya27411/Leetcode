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
    ListNode* middleNode(ListNode* head) {
        int n=0;
        ListNode* temp=head;
        ListNode* temp1=head;
        while(temp!=NULL)
        {
            n++;
            temp=temp->next;
        }
        int c=0;
        while(temp1!=NULL)
        {
            if(c==n/2)
            return temp1;
            else
            c++;
            temp1=temp1->next;
        }
        cout<<c;
        return temp1;
    }
};