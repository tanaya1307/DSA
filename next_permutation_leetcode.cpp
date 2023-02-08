class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i;
        reverse(nums.begin(),nums.end());
        if(is_sorted(nums.begin(),nums.end()))
        {     
             sort(nums.begin(),nums.end());
               return;
        }
        else{
             reverse(nums.begin(),nums.end());

        }
        int j;
        if(nums.size()==1) return;
        for( i=0;i<nums.size()-1;i++)
        {
            if(nums[i+1]>nums[i])
            {
                j=i;

            }
             
        }
     
        int k;
      
        for(k=j+1;k<nums.size();k++)
        {
            if(nums[k]<=nums[j])
            {
                k--;
                break;
            }
           if(k==nums.size()-1)
           {
                break;
           }

        }
 
        swap(nums[j],nums[k]);
        sort(nums.begin()+j+1,nums.end());

        
        
    }
};
