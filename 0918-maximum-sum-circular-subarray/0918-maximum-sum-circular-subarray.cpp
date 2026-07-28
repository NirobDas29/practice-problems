class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
       int maxsum=INT_MIN;
       int currentMax=0;
       int minsum=INT_MAX;
       int currentmin=0;
       int totalsum=0;
        for(int num:nums)
        {
           currentMax= max(num,currentMax+num);
           maxsum=max(maxsum,currentMax);
           currentmin= min(num,currentmin+num);
           minsum=min(minsum,currentmin);
           totalsum+=num;
        }
        if(maxsum<0)
        {
            return maxsum;
        }
        return max(maxsum,totalsum-minsum);
        
    }
};