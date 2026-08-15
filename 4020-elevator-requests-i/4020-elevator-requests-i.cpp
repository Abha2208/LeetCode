class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        n=0;
        int k=requests.size();
        int sum=n+requests[0];
        for(int i=1;i<k;i++)
            {
                sum=sum+abs((requests[i]-requests[i-1]));
            }
        return sum;
    }
};