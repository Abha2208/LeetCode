class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        // sort(nums.begin(), nums.end());
        // vector<int> result;
        // for(int i = 0; i < nums.size(); i++) {
        //     if(nums[i] == target)
        //         result.push_back(i);
        // }
        // return result;
        vector<int> ans;
        int less=0,equal=0;
        for(int x:nums)
        {
            if(x<target)
            {
                less++;
            }
            else if(x==target)
            {
                equal++;
            }
        }
        for(int i=0;i<equal;i++)
        {
            ans.push_back(less+i);
        }
        return ans;
    }
};