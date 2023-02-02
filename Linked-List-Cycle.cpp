/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL || head->next==NULL) return false;
      map <ListNode*,bool> m;
      ListNode * curr=new ListNode();
      curr=head;
     
      
      while(true)
      {   
          if(m[curr]==true) break;
          if(curr->next==NULL) return false;
          m[curr]=true;
      
          curr=curr->next;

      }
      return true;
      

    }
};
