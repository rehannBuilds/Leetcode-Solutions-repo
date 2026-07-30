/*
its very simple approach too 
har do element ko compare kro and whereever the order seems wrong just keep swapping them...

Algorithm

For every pass:

Start from the beginning.
Compare two adjacent elements.
If left > right, swap them.
Continue until the end.
Repeat for the remaining unsorted part

*/

class Solution {
public:
    vector<int> bubbleSort(vector<int>& nums) {
        for(int j=0;j<nums.size();j++){
        for(int i=0;i<nums.size()-j-1;i++){//mind it here okay? numssize-j-2 is there for a reason 
            if(nums[i]>nums[i+1]){
                swap(nums[i],nums[i+1]);
            }

        }
        }
        return nums;

    }
};


