class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        int j=n-1,i=0;
        vector<int> ans;
        while(i<j)
        {
            int sum=numbers[i]+numbers[j];
            if(sum==target)
            {
                return {i+1,j+1};
            }
            else if(sum>target)
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        return {};
    }
};