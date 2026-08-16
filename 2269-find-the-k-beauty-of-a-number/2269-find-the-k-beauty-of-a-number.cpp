class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string s=to_string(num);
        int l=0,r=0,max_len=0;
        int n=s.length();
        while(r<n)
        {
            if(r-l+1==k)
            {
                int x=stoi(s.substr(l,k));
                if(x!=0 && num%x==0)
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