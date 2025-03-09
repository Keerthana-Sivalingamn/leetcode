class Solution {
    public int canCompleteCircuit(int[] gas, int[] cost) {
        int i;
        int l=gas.length;
        int r=0;
        int rg=0,k=0;
        int start=0;
        int tg=0,tc=0;
        for(i=0;i<l;i++)
        {
            tg+=gas[i];
            tc+=cost[i];
        }
        if(tg<tc) return -1;
        for(i=0;i<gas.length;i++)
        {
            rg=rg+(gas[i]-cost[i]);
            if(rg<0)
            {
                start=i+1;
                rg=0;
            }
        }
        return start;
        
        
    }
}