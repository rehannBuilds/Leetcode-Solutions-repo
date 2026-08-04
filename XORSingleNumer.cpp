class Solution {
public:
    int singleNumber(vector<int>& nums) {

        // This variable will store the XOR of all elements.
        // Start with 0 because x ^ 0 = x.
        int ans = 0;

        // Traverse every number in the array.
        for (int num : nums) {

            // XOR the current number with the accumulated result.
            //
            // Duplicate numbers cancel each other:
            // 5 ^ 5 = 0
            //
            // Only the unique number remains at the end.
            ans ^= num;
        }

        // Return the single number.
        return ans;
    }
};