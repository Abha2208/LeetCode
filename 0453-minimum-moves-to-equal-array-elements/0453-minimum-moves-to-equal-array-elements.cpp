class Solution {
public:
    int minMoves(vector<int>& nums) {
        int a=*min_element(nums.begin(),nums.end());
        int moves=0;
        for (int x:nums) 
        {
            moves+=x-a;
        }
        return moves;
    }
};