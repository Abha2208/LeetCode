class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int product=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                product=max(product,((nums[i]-1)*(nums[j]-1)));
            }
        }
        return product;
    }
};