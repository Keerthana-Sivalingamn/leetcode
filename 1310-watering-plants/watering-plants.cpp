class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int i;
        int s=0;
        int l=plants.size();
        int v=capacity;
        for(i=0;i<l;i++)
        {
            if(plants[i]<=capacity)
            {
                s=s+1;
                capacity=capacity-plants[i];
            }
            else
            {
                s=s+(i*2)+1;
                capacity=v-plants[i];
            }
        }
        return s;
        
    }
};