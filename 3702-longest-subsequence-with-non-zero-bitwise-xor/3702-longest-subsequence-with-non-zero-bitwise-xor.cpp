class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n=nums.size();
        int xr=0;
        int zeros=0;
        for(int x:nums)
        {
            xr=xr^=x;
            if(x==0)
            {
                zeros++;
            }
        }
        if(xr!=0)
        {
            return n;
        }
        if(zeros==n)
        {
            return 0;
        }
        return n-1;
    }
};