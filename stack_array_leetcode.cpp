class Solution {
 
    
    
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<int> s;
        vector<string>ans;
        int i=n;
        int size=target.size();
        while(i!=0)
        {   if(s.size()<size && !s.empty())
            {
                if(s.at(s.size()-1)!=target.at(s.size()-1))
                {
                    s.pop_back();
                    ans.push_back("Pop");
                }
            }
            if(s.size()==size)
            {
            if(s==target)
            {
               break;
            }
            else{
                if(s.size()!=0)
                {
                    s.pop_back();
                    ans.push_back("Pop");
                }
            }

            }

            else{
                if(i!=0)
                {
                    s.push_back(n-i+1);
                    i--;
                    ans.push_back("Push");

                }

            }


        }
       
         return ans;  

    }     
        
    
};


// DESCRIPTION /EXAMPLE
Input: target = [1,3], n = 3
Output: ["Push","Push","Pop","Push"]
Explanation: Initially the stack s is empty. The last element is the top of the stack.
Read 1 from the stream and push it to the stack. s = [1].
Read 2 from the stream and push it to the stack. s = [1,2].
Pop the integer on the top of the stack. s = [1].
Read 3 from the stream and push it to the stack. s = [1,3].
