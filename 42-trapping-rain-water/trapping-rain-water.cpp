class Solution {
public:
    int trap(vector<int>& height) {
        int i;
    int n=height.size();
    vector<int>l(n);
    vector<int>r(n);
    int max=0;
    for(i=0;i<n;i++)
    {
        if(max<height[i])
        {
           max=height[i]; 
        }
        l[i]=max;
    }
    max=0;
    for(i=n-1;i>=0;i--)
    {
        if(max<height[i])
        {
            max=height[i];
        }
        r[i]=max;
    }
    int t=0;
    for(i=0;i<n;i++)
    {
        t=t+min(l[i],r[i])-height[i];
    }
    return t;
        
    }
};