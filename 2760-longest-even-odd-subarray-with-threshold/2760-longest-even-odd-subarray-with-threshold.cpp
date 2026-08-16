class Solution {
public:
    int longestAlternatingSubarray(vector<int>& nums, int threshold) {
        int n=nums.size();
        int l=0,r=0,max_len=0;
        while(r<n)
        {
            if(nums[l]%2==0 && nums[l]<=threshold)
            {
                if(nums[r]<=threshold)
                {
                    if(r==l)
                    {
                        max_len=max(max_len,r-l+1);
                        r++;
                    }
                    else if(nums[r]%2!=nums[r-1]%2)
                    {
                        max_len=max(max_len,r-l+1);
                        r++;
                    }
                    else
                    {
                        l=r;
                    }
                }
                else
                {
                    l=r+1;
                    r=l;
                }
            }
            else
            {
                l++;
                r=l;
            }
        }
        return max_len;
    }
};

