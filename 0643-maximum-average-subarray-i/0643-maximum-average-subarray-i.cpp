class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum=0;
        for(int i=0;i<k;i++)
        {
            sum+=nums[i];
        }
        int max_sum=sum;
        for(int right=k;right<nums.size();right++)
        {
            sum+=nums[right];
            sum-=nums[right-k];
            max_sum=max(sum,max_sum);
        }
        return (double)max_sum/k;
    }
};