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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *t1=l1,*t2=l2;
        ListNode *newNode=new ListNode(0);
        ListNode *temp=newNode;
        int carry=0;
        while(t1!=NULL && t2!=NULL)
        {
            int sum=t1->val+t2->val+carry;
            if(sum == 10 && t1->next == NULL && t2->next == NULL)
            {
                temp->next=new ListNode(0);
                temp=temp->next;
                temp->next=new ListNode(1);
            }
            else if(sum == 10 && (t1->next != NULL || t2->next != NULL))
            {
                temp->next=new ListNode(0);
                temp=temp->next;
                carry=1;
            }
            else if((t1->val+t2->val)>=10)
            {
                temp->next=new ListNode(sum%10);
                temp=temp->next;
                carry=1;
            }
            else
            {
                temp->next=new ListNode(sum);
                temp=temp->next;
                carry=0;
            }
            cout<<newNode->val<<endl;
            t1=t1->next;
            t2=t2->next;
            //temp=temp->next;
        }
        if(t1!=NULL)
        {
            while(t1!=NULL)
            {
                if(t1->val+carry>=10)
                {
                    temp->next=new ListNode((t1->val + carry)%10);
                    temp=temp->next;
                    carry=1;
                }
                else
                {
                    temp->next=new ListNode(t1->val + carry);
                    temp=temp->next;
                    carry=0;
                }
                t1=t1->next;
            }
        }
        else if(t2!=NULL)
        {
            while(t2!=NULL)
            {
                if(t2->val+carry>=10)
                {
                    temp->next=new ListNode((t2->val + carry)%10);
                    temp=temp->next;
                    carry=1;
                }
                else
                {
                    temp->next=new ListNode(t2->val + carry);
                    temp=temp->next;
                    carry=0;
                }
                t2=t2->next;
            }
        }
        if(carry==1)
        temp->next=new ListNode(carry);
        return newNode->next;
    }
};