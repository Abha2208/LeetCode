class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        int n=nums.size();
        int best=nums[n-1];
        int nest=0,ans=0;
        for(int i=n-k-1;i>=0;i--)
        {
            best=max(best,nums[i+k]);
            ans=max(ans,nums[i]+best);
        }
        return ans;
    }
};