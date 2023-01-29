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
    ListNode* removeNthFromEnd(ListNode* head, int n)
    { 
        if(head->next==NULL && n==1) return NULL;
        if(n==1 && head->next!=NULL)
        {  ListNode* curr=head;
            while(curr!=NULL)
            {
                ListNode* prev=curr;
                 curr=curr->next;
                if(curr->next==NULL)
                {
                    prev->next=NULL;
                    return head;
                }
               
            }
        }

        ListNode* curr=head;
        ListNode* prev;
        ListNode* prev2;
        while(curr!=NULL)
        {   prev=curr;
            prev2=prev->next;
            curr=curr->next;
            ListNode* t=prev;
            int x=0;
            bool found=false;
            while(x<n && t->next!=NULL)
            {   t=t->next;
                x++;
                if(x==n && t->next==NULL)
                { found =true;
                   break;
                }
            }
             if(found) break;
            
        }
        
            if(curr!=NULL)
            {   
          ListNode* temp=curr->next;
                curr->next=NULL;
            prev->next=temp;}
            else
            {
            //    ListNode* temp=head;
               head=head->next;

            }
            
            return head;
          
    }
};
