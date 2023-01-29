class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return NULL;
        if(nums.size()==1) return 1;
        int count=1;
        int max=1;
        sort(nums.begin(),nums.end());
        bool p=false;
        int i=0;
        cout<<nums.size();
        while(i<nums.size()-1 )
        {   
            if(nums[i+1]==nums[i]+1 )
            {
                count++;
              
            }
            else if(nums[i+1]==nums[i]){
              i++;
               continue;
            }
           else
           {   
               count=1;
           }
           if(count>=max)
               {max=count;}
           i++;

        }
        return max;
    }
};
