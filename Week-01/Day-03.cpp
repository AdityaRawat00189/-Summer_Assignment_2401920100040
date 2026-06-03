#include <bits/stdc++.h>

using namespace std;

/* ------ Move Zeroes ------ */
/* ------ https://leetcode.com/problems/move-zeroes/ ------ */

void moveZeroes(vector<int>& arr) {
    int first=0,second=0;
    while(second<arr.size()){
    if(arr[first]==0){
        if(arr[second]!=0){
            swap(arr[first],arr[second]);
            first++, second++;
        }
        else {
            second++;
        }
    }
    else {
        first++,second++;
    }
    }
    return;
}

/* ------ Time complexity = O(n) ------ */
/* ------ space complexity = O(1) ------ */



/* ------ Squares of a Sorted Array ------ */
/* ------ https://leetcode.com/problems/squares-of-a-sorted-array/ ------ */

vector<int> sortedSquares(vector<int>& nums) {
    int n=nums.size();
    int left=0,right=n-1,index=n-1;
    vector<int>ans(n);
    while(left<=right){
        if(abs(nums[left])>abs(nums[right])){
            ans[index]=nums[left]*nums[left];
            left++;
        }
        else{
            ans[index]=nums[right]*nums[right];
            right--;
        }
        index--;
    }
    return ans;
}

/* ------ Time complexity = O(n) (No sorting) ------ */
/* ------ space complexity = O(1)  ------ */




/* ------ Container With Most Water ------ */
/* ------ https://leetcode.com/problems/container-with-most-water/ ------ */

int maxArea(vector<int>& height) {
    int n=height.size();
    int left=0,right=n-1;
    int area=0;
    while(left<=right){
        int temp=(right-left)*(min(height[left],height[right]));
        area=max(area,temp);
        if(height[left]<height[right]) left++;
        else right--;
    }
    return area;
}

/* ------ Time complexity = O(n) ------ */
/* ------ space complexity = O(1) ------ */