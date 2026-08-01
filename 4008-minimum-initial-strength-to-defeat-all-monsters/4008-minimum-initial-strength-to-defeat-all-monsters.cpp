class Solution {
public:
    long long minInitialStrength(vector<int>& monsters, vector<vector<int>>& boosts) {
        int n=monsters.size();
        vector<long long> diff(n+1,0);
        for(auto &b:boosts)
            {
                diff[b[0]]+=b[2];
                if(b[1]+1<n)
                {
                    diff[b[1]+1]-=b[2];
                }
            }
        vector<long long> bonus(n);
        long long curr=0;
        for(int i=0;i<n;i++)
            {
                curr+=diff[i];
                bonus[i]=curr;
            }
        auto check=[&](long long start)
        {
            long long strength=start;
            for(int i=0;i<n;i++)
                {
                    if(strength+bonus[i]<monsters[i])
                    {
                        return false;
                    }
                    strength-=monsters[i];
                    if(strength<0)
                    {
                        strength=0;
                    }
                }
            return true;
        };
        long long ho=0,hi=0;
        for(int x:monsters)
            {
                hi+=x;
            }
        while(ho<hi)
            {
                long long mid=ho+(hi-ho)/2;
                if(check(mid))
                {
                    hi=mid;
                }
                else
                {
                    ho=mid+1;
                }
            }
        return ho;
    }
};