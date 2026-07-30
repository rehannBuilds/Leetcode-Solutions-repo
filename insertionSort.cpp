/*
Suppose you're arranging playing cards in your hand.
You already have some cards sorted:
2 5 7
Now someone gives you a new card:
4
Do you sort all four cards again?
No.
You move 7 right, move 5 right, and insert 4.
Final:
2 4 5 7
Insertion Sort works exactly like this.
we use key to store the one that's gonna be replaced by so that we can use it later 

*/
class Solution {
public:
    vector<int> insertionSort(vector<int>& nums) {
        int n = nums.size();
        for(int i = 1; i < n; i++) {
            int key = nums[i]; // store kr liya 
            int j = i - 1;
            while(j >= 0 && nums[j] > key) {
                nums[j + 1] = nums[j];
                j--;
            }
            nums[j + 1] = key; //restore
        }
        return nums;
    }
};
