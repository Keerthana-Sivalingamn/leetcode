class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int m=nums[0];
        int i,d,j;
        int l=nums.size();
        int maxi;
        if(l<=1)
        {
            return 0;
        }
        for(i=0;i<l;i++)
        {
            if(nums[i]<m)
            {
                m=nums[i];
            }
            else
            {
                maxi=max(maxi,nums[i]-m);
            }
        }
        return maxi;
        
    }
};