class Solution {
    private:
    void findSub(vector<int> nums,vector<int> subset,vector<vector<int>>&result,int i)
    {
        if(i>nums.size()-1)
        {
            result.push_back(subset);
            return ;
        }
       
       //exclude
       findSub(nums,subset,result,i+1);
       //include
       subset.push_back(nums[i]);
       findSub(nums,subset,result,i+1);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
         vector<int> subset;
        vector<vector<int>> result;
        int i=0;
        findSub(nums,subset,result,i);
        return result;
    }
};
