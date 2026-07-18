class Solution {
public:
    int findGCD(vector<int>& nums) {
        int gcd=1;
       int maxe = *max_element(nums.begin(), nums.end());
       int mine = *min_element(nums.begin(), nums.end());
       for(int i=1;i<=min(maxe,mine);i++){
        if(maxe%i==0 && mine%i==0)
        {
            gcd=i;
        }
       }
       return gcd;
    }
};