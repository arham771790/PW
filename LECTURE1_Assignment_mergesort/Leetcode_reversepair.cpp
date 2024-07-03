// Hard
//Given an integer array nums,
//return the number of reverse pairs in the array.
//A reverse pair is a
//pair(i, j) where :
//0 <= i < j < nums.length and
//nums[i] > 2 * nums[j].
//Example 1 : Input : nums = [ 1, 3, 2, 3, 1 ] Output : 2
// Explanation : The reverse pairs are : (1, 4)-- > nums[1] = 3,
//nums[4] = 1, 3 > 2 * 1(3, 4)-- > nums[3] = 3, nums[4] = 1, 3 > 2 * 1 
//Example 2 : Input : nums = [ 2, 4, 3, 5, 1 ] 
//Output : 3 
//Explanation : The reverse pairs are : (1, 4)-- > nums[1] = 4,
// nums[4] = 1, 4 > 2 * 1(2, 4)-- > nums[2] = 3, nums//[4] = 1, 3 > 2 * 1(3, 4)-- > nums[3] = 5, 
//nums[4] = 1, 5 > 2 * 1
//Constraints : 1 <=nums.length <= 5
 class Solution
{
public:
    int ans = 0;
    void merge(vector<int> &a, int low, int mid, int high)
    {

        int i = low, j = mid + 1;
        while (i <= mid and j <= high)
        {
            if ((long long int)a[i] > (long long int)2 * a[j])
            {
                ans += mid - i + 1;
                j++;
            }
            else
            {
                i++;
            }
        }
        i = low, j = mid + 1;
        vector<int> b;
        while (i <= mid && j <= high)
        {
            if (a[i] < a[j])
            {
                b.push_back(a[i]);
                i++;
            }
            else
            {
                b.push_back(a[j]);
                j++;
            }
        }
        while (i <= mid)
        {
            b.push_back(a[i]);
            i++;
        }
        while (j <= high)
        {
            b.push_back(a[j]);
            j++;
        }

        for (int k = low; k <= high; k++)
            a[k] = b[k - low];
    }

    void mergesort(vector<int> &nums, int low, int high)
    {
        if (low == high)
            return;
        int mid = (low + high) / 2;
        mergesort(nums, low, mid);
        mergesort(nums, mid + 1, high);
        merge(nums, low, mid, high);
    }
    int reversePairs(vector<int> &nums)
    {
        mergesort(nums, 0, nums.size() - 1);
        return ans;
    }
};