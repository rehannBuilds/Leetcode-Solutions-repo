//1365
/*vector<int> smallerNumbersThanCurrent(vector<int>& nums) {

    // Step 1
    copy vector

    // Step 2
    sort copy

    // Step 3
    build unordered_map<number, firstIndex>

    // Step 4
    create answer vector

    // Step 5
    traverse original nums
    push map value into answer

    // Step 6
    return answer
}*/

class Solution {

public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {

        // Step 1: Make a copy of the original array.
        // We don't want to sort the original array because
        // we need its original order for the final answer.
        vector<int> sorted = nums;

        // Step 2: Sort the copied array.
        sort(sorted.begin(), sorted.end());

        // Step 3: Create a map.
        // Key   -> Number
        // Value -> First index of that number in the sorted array
        //
        // Example:
        // sorted = [1,2,2,3,8]
        //
        // Map becomes:
        // 1 -> 0
        // 2 -> 1
        // 3 -> 3
        // 8 -> 4
        //
        // Why first index?
        // Because the first index tells us exactly how many
        // numbers are smaller than the current number.
        unordered_map<int, int> mp;

        // Store only the first occurrence of every number.
        for (int i = 0; i < sorted.size(); i++) {

            // If this number is not already in the map,
            // store its index.
            if (mp.find(sorted[i]) == mp.end()) {
                mp[sorted[i]] = i;
            }
        }

        // Step 4: Create the answer vector.
        vector<int> ans;

        // Step 5: Traverse the original array.
        for (int i = 0; i < nums.size(); i++) {

            // mp[nums[i]] gives the number of elements
            // smaller than nums[i].
            //
            // Example:
            // nums[i] = 8
            // mp[8] = 4
            //
            // Therefore, 4 numbers are smaller than 8.
            ans.push_back(mp[nums[i]]);
        }

        // Step 6: Return the final answer.
        return ans;
    }
};
 