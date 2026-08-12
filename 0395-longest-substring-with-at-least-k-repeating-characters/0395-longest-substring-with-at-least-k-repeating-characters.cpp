class Solution {
public:
    int longestSubstring(string s, int k) {
        int ans=0;
        for(int left=0;left<s.size();left++)
        {
            vector<int> freq(26,0);
            for(int right=left;right<s.size();right++)
            {
                freq[s[right]-'a']++;
                bool valid=true;
                for(int i=0;i<26;i++)
                {
                    if(freq[i]>0 && freq[i]<k)
                    {
                        valid=false;
                        break;
                    }
                }
                if(valid)
                {
                    ans=max(ans,right-left+1);
                }
            }
        }
        return ans;
    }
};