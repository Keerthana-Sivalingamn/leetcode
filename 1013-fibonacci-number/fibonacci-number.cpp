class Solution {
public:
    int fibno(int n,vector<int>db) {
        if(n==0)
          return 0;
        if(n==1)
          return 1;
        db[0]=0;
        db[1]=1;
        int i,s=0;
        for(i=2;i<=n;i++)
        {
            db[i]=db[i-1]+db[i-2];
        }
        return db[n];
        
    }
    int fib(int n)
    {
        vector<int> db(n+1,-1);
        return fibno(n,db);

    }
};