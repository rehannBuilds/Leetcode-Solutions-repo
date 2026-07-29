//BRUTE FORCE - TRY 1 - O(n2) - WRONG
//class Solution {
//public:
//    int maxArea(vector<int>& height) {
//        vector<int> push;
//        int maxi=0;
 //       int j=height.size()-1;
//        for(int j=height.size()-1;j>=0;j--){
//        for(int i=0;i<j;i++){
//           maxi=max(maxi,(j-i)*(min(height[i],height[j]))); //ye ham secure kar rahe //hai apna har ek area jo b calculate hora naw 
 //       }
 //       }
 //       return maxi;
//
//    }
//};

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int maxi = 0;

        while (left < right) {
            maxi=max(maxi,(right-left)*(min(height[left],height[right]))); //ye to store krra har step ke area takk ka max
            if(height[left]<height[right]){ //ye conditions will make sure we cover every possibility too while preserving our maxi
                left++;
            }else{
                right--;
            }
        }
        return maxi;
    }
};