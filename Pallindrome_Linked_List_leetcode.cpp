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
    private:
    ListNode* reverse(ListNode* head)
    {  
           if(head==NULL || head->next==NULL)
        {
            return head;
        }

        ListNode* newHead= reverse(head->next);
        head->next->next=head;
        head->next=NULL;

        return newHead;

    }
public:
    bool isPalindrome(ListNode* head) {
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
       cout<<"slow:"<<slow->val;
       ListNode* head2= reverse(slow);
       cout<<"head2:"<<head2->val<<'\n';
       slow=NULL;
       
       while(head!=NULL && head2!=NULL)
       {  
           if(head->val!=head2->val) return false;
            cout<<head->val<<"<-> "<<head2->val<<'\n';
           head=head->next;
           head2=head2->next;
       }


       return true;
    }
};
