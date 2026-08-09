class Solution {
public:
    vector<int> leaders(vector<int>& nums) {
      vector<int> newarr;
      int ptr=nums.size();
      int maxi=0;

      for(int i=nums.size()-1;i>=0;i--){
        if(nums[i]>maxi){
            newarr.push_back(nums[i]);
            maxi=INT_MIN;
        }
        
      }
      reverse(newarr.begin(), newarr.end());
      return newarr;
      
      }
};
