class Solution {
public:
    int maximumWidth(vector<int>& planks) {
        unordered_map<long long,int> freq;
        for(int x:planks)
            {
                freq[x]++;
            }
        vector<long long> vals;
        for(auto&p:freq)
            {
                vals.push_back(p.first);
            }
        unordered_map<long long,int> pair_cnt;
        int m=vals.size();
        for(int i=0;i<m;i++)
            {
                for(int j=i;j<m;j++)
                    {
                        long long a=vals[i];
                        long long b=vals[j];
                        long long sum=a+b;
                        if(a==b)
                        {
                            pair_cnt[sum]+=freq[a]/2;
                        }
                        else
                        {
                            pair_cnt[sum]+=min(freq[a],freq[b]);
                        }
                    }
            }
        int ans=1;
        for(auto &p:pair_cnt)
            {
                long long h=p.first;
                int w=p.second;
                if(freq.count(h))
                {
                    w+=freq[h];
                }
                ans=max(ans,w);
            }
        for(auto& p:freq)
            {
                ans=max(ans,p.second);
            }
        return ans;
    }
};