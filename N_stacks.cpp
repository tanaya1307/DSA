

#include<bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h> 
class NStack
{
public:
    int nextAvailable=0;
    int * arr;
    int* tops;
    int * next;


    NStack(int N, int S)
    {
        arr=new int[S];
        tops=new int[N];
        next=new int[S];
        int i=0;
        while(i<N)
        {
            tops[i]=-1;
            i++;
        }
        i=0;
        while(i<S-1)
        {
            next[i]=i+1;
            i++;
        }
        next[i]=-1;
        
    }

    // Pushes 'X' into the Mth stack. Returns true if it gets pushed into the stack, and false otherwise.
    bool push(int x, int m)
    { m=m-1;   
      if(nextAvailable==-1) return false;
         else{
            arr[nextAvailable]=x;
            // cout<<arr[nextAvailable]<<"\n";
            int temp1=tops[m];
            tops[m]=nextAvailable;
            int temp2=nextAvailable;
            nextAvailable=next[temp2];
            next[temp2]=temp1;

            return true;

         }
        
    }

    // Pops top element from Mth Stack. Returns -1 if the stack is empty, otherwise returns the popped element.
    int pop(int m)
    {   m=m-1;
      cout<<"tops:"<<tops[m]<<endl;
        if(tops[m]==-1) return -1;
        else
        {
          int temp=tops[m];
            tops[m]=next[temp];
            next[temp]=nextAvailable;
            nextAvailable= temp;
            return arr[temp];

        }
    }
};

int main()
{
    
    
    NStack* a=new NStack(6,10);
  cout<<a->pop(2)<<endl;
  
  cout<< a->push(8,2)<<endl;
  cout<<a->push(1,2)<<endl;
  cout<<a->push(25,9)<<endl;
  cout<<a->push(41,3)<<endl;
  cout<<a->push(20,2)<<endl;
  cout<<a->push(17,2)<<endl;
   cout<<a->pop(2)<<endl;
   cout<<a->pop(2)<<endl;
   cout<<a->pop(2)<<endl;
 
  
  
    
  }
