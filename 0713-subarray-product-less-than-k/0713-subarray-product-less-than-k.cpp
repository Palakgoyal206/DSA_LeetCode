// class Solution {
// public:
//     int numSubarrayProductLessThanK(vector<int>& nums, int k) {
//         int n = nums.size();
//         int count = 0;
        
//         for(int i=0 ; i<n ; i++){
//             int prod = 1;
//             for(int j=i ; j<n ; j++){
//                 prod *= nums[j];
//                 if(prod < k)
//                     count++;
//             }
//         }
//         return count;
//     }
// };

class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n = nums.size();
        int prod = 1;
        int count = 0;
        int j = 0;

        for (int i = 0; i < n; i++)
        {
            prod *= nums[i];
            while (j <= i && prod >= k)
            {
                prod /= nums[j];
                j++;
            }
            count += i - j + 1;
        }
        return count;
    }
};