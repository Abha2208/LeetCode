class Solution {
public:
    int countCommas(int n) {
        int b=0;
        for(int i=1000;i<=n;i++)
            {
                b+=(log10(i))/3;
            }
        return b;
    }
};