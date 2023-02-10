class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(nums.size()==1 || nums.empty()) return;
        if(k==nums.size()) return;
        vector<int>v;
        k=k%(nums.size());
        for(int i=0;i<nums.size();i++)
        {
            if(i>nums.size()-1-k)
            {
                v.push_back(nums[i]);
                
            }
        }
        for(int i=0;i<nums.size()-k;i++)
        {
            v.push_back(nums[i]);
        }
        nums=v;
        return;
        
    }
};
