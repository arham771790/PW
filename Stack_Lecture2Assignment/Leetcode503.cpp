class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack <int> st;
        
        int n=nums.size();
        vector <int> ans(n,-1);
        for(int i=0;i<2*n;i++)
        {
            int idx=i%n;
            while(!st.empty() && nums[idx]>nums[st.top()])
            {
                ans[st.top()]=nums[idx];
                st.pop();
            }
            st.push(idx);
        }
        return ans;
        
    }
};