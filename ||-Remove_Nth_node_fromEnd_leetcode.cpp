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
        if(head==NULL || head->next==NULL) return NULL;
        
        ListNode* curr=head;
        int count=1;
        while(curr->next!=NULL)
        {
            curr=curr->next;
            count++;
        }
        int x=count-n-1;
        if(x<0) return head->next;
        curr=head;
        if(count>2)
        {
        while( curr->next->next!=NULL &&  x>0)
        {
             curr=curr->next;
             x--;
        }
        }
        curr->next=curr->next->next;

        return head;
        
    }
};
