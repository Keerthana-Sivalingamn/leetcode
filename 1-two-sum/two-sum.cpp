class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i,j;
        int l=nums.size();
        for(i=0;i<l;i++)
        {
            for(j=(i+1);j<l;j++)
            {
                if(nums[i]+nums[j]==target)
                  return{i,j};
            }
        }
        return{};
        
    }
};