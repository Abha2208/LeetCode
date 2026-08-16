class Solution {
public:
    int countGoodSubstrings(string s) {
        int n=s.length();
        int l=0,r=0,max_len=0;
        while(r<n)
        {
            if(r-l+1==3)
            {
                if(s[l]!=s[l+1] && s[l+1]!=s[r] && s[r]!=s[l])
                {
                    max_len++;
                }
                l++;
            }
            else
            {
                r++;
            }
        }
        return max_len;
    }
};