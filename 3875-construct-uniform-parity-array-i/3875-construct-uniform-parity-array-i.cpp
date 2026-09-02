class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        //return true;
        bool even=false;
        bool odd=false;
        for(int x:nums1)
        {
            if(x%2==0)
            {
                even=true;
            }
            else
            {
                odd=true;
            }
        }
        if(even && odd)
        {
            return true;
        }
        if(even)
        {
            return true;
        }
        if(odd)
        {
            return true;
        }
        return false;
    }
};