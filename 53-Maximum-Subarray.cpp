class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cursum=0;
        int maxsum=INT_MIN;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            int temp=cursum+nums[i];
            if(temp<nums[i])
            {
                cursum=nums[i];
            }
            else
            {
                cursum=temp;
            }
            if(maxsum<cursum)
            {
                maxsum=cursum;
            }
        }
        return maxsum;
    }
};