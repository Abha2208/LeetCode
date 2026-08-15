class Solution {
public:
    int kthDigit(long long k) {
        if(k<=9)
        {
            return k;
        }
        k-=9;
        long long b=2;
        long long s=1;
        while(true)
            {
                long long digits=9*s;
                //long long next=b*10;
                //long long n=next-b;
                long long total=digits*10*b;
                if(k>total)
                {
                    k-=total;
                    b++;
                    s*=10;
                }
                else
                {
                    break;
                }
            }
        long long d=(k-1)/(10*b);
        long long i=s+d;
        long long p=(k-1)%(10*b);
        long long aa=p/b;
        long long di=p%b;
        long long num;
        if(i%2==0)
        {
            num=10*i+aa;
        }
        else
        {
            num=10*i+(9-aa);
        }
        string sa=to_string(num);
        return sa[di]-'0';
    }
};