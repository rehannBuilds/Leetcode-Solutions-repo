/*
Algorithm
-First index se start karo. ab bakiyon me jo sabse minimum hoga wo isse replace (swap) krdo and so on
-Baaki array me minimum element dhoondo.
-Us minimum ko current index se swap karo.
-Next index par jao.
-Repeat until array sort ho jaye

*/

class Solution {
public:
    vector<int> selectionSort(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int min=i;
            for(int j=i+1;j<nums.size();j++){
                if(nums[j]<nums[min]){         //ye uske aage wale se minimumm dhundhega 
                    min=j;                     // min update krte rho 
                }
            }
            swap(nums[i],nums[min]);       //tadaaaaaaaaaaa
        }
    return nums;
    }
};
