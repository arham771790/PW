class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int pivotIdx=-1;
        vector <int> suf(n);
        suf[n-1]=nums[n-1];
       //suffix
        for(int i=n-2;i>=0;i--)
        {
            suf[i]=nums[i]+suf[i+1];
        }
        //prefix
        for(int i=1;i<n;i++)
        {
            nums[i]=nums[i]+nums[i-1];
        }
        for(int i=0;i<n;i++)
        {
            if(suf[i]==nums[i])
            {
                pivotIdx=i;
                break;
            }
        }
return pivotIdx;

    }
};