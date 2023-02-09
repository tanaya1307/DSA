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
        int carry=0;
     
        int ls=1,lr=1;
         ListNode* a=l1;
         ListNode* b=l2;
         ListNode* d=a;
         ListNode* e=b;
         ListNode* ans=e;
         


        while(a->next!=NULL && b->next!=NULL)
        {   a=a->next;
            b=b->next;
            ls++;
            lr++;
            

        }
        while(a->next!=NULL)
        {    
            ls++;
            a=a->next;
        }

        while(b->next!=NULL)
        {
             lr++;
            b=b->next;
        }
          cout<<"lr"<<lr<<" ls"<<ls<<endl;
       if(ls>lr)
       {   while(lr!=ls)
       {
     
           b->next=new ListNode(0);
           b=b->next;

           lr++;
       }
       }
         

       if(lr>ls)
       {
           while(ls!=lr)
           {
            
                a->next=new ListNode(0);
                a=a->next;
                ls++;
           }
       }
   
        
        while(d!=NULL && e!=NULL)
        {
            e->val=d->val+e->val+carry;
            carry=0;
            if(e->val >9)
            {
                carry=(e->val)/10;
                e->val=(e->val)%10;
            }
           if(d->next==NULL)
           {
               break;
           } 
            d=d->next;
            e=e->next;
        }  
    
        
          if(carry==1)
          {  
              e->next=new ListNode(1,NULL);

          }
        

        return ans;

    }
};
