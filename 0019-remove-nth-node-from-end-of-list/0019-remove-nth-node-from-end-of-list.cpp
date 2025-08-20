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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int N=0;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            N++;
            temp=temp->next;
        }
        cout<<N;
        if(N==1) return nullptr;
        if(N==n) return head->next;
        int c=0;
        ListNode* temp1=head;
        ListNode* ptr=head;
        while(temp1!=NULL)
        {
            if(N-c==n)
            break;
            c++;
            ptr=temp1;
            temp1=temp1->next;
        }
        ptr->next=temp1->next;
        return head;
    }
};