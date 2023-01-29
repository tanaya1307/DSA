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
    ListNode* removeNode(ListNode* curr,ListNode* head)
    {   ListNode* temp=head;
        ListNode* prev;
       do
       {  
          prev=temp;
         temp=temp->next;
         if(temp==curr)
         {
            prev->next=temp->next;
            temp->next=NULL;
           break;
         }

        }while(temp!=curr);

        return prev;
    }

public:
    ListNode* deleteDuplicates(ListNode* head) {
       if(head==NULL) return NULL;
       if(head->next==NULL ) return head;
       
       map<int,bool> m;
       ListNode* curr=head;
       while(curr!=NULL)
       {
           if(m[curr->val]==true)
           {
              curr= removeNode(curr,head);
           }
           m[curr->val]=true;
           curr=curr->next;

       } 


        return head;
    }
};
