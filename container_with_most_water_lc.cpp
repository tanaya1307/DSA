class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxi=0;
        int i=0,j=height.size()-1;
        while(i<j)
        {
            int area=max(maxi,(j-i)*min(height[i],height[j]));
            maxi=area;
            
            if(height[i]<height[j])
            {
                i++;
            }
            else{
                j--;
            }
        }
       

        return maxi;
        
    }
};
