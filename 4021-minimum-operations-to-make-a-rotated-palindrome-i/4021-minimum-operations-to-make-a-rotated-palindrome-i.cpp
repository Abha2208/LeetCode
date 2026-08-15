class Solution {
public:
    int minOperations(string s) {
        int n=s.size();
        int ans=INT_MAX;
        for(int i=0;i<n;i++)
            {
                int cost=i;
                for(int j=0;j<n/2;j++)
                    {
                        char a=s[(j+i)%n];
                        char b=s[(n-1-j+i)%n];
                        int x=abs(a-b);
                        int p=min(x,26-x);
                        cost+=p;
                    }
                ans=min(ans,cost);
            }
        return ans;
    }
};