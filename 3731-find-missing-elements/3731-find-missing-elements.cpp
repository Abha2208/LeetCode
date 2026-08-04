class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;
        int a=*max_element(nums.begin(),nums.end());
        int b=*min_element(nums.begin(),nums.end());
        unordered_set<int> st(nums.begin(),nums.end());
        for(int i=b+1;i<a;i++)
        {
            if(st.find(i)==st.end()) 
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};