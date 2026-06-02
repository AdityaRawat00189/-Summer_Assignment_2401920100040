#include <bits/stdc++.h>

using namespace std;

/* ------ Maximum Subarray ------ */
/* ------ https://leetcode.com/problems/maximum-subarray/ ------ */

int maxSubArray(vector<int>& nums) {
    int n = nums.size(), sum = 0, ans = INT_MIN;
    for(int i=0;i<n;i++) {
        sum += nums[i];
        ans = max(ans,sum);

        if(sum < 0) {
            sum = 0;
        }
    }

    return ans;
}

/* ------ Time complexity = O(n) ------ */
/* ------ space complexity = O(1) ------ */



/* ------ Contains Duplicate ------ */
/* ------ https://leetcode.com/problems/contains-duplicate/ ------ */

bool containsDuplicate(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size()-1;i++){
        if(nums[i]==nums[i+1]){
            return true;
        }
    }
    return false;
}

/* ------ Time complexity = O(nlogn) ------ */
/* ------ space complexity = O(1)  ------ */




/* ------ Maximum Average Subarray 1 ------ */
/* ------ https://leetcode.com/problems/maximum-average-subarray-i/ ------ */

double findMaxAverage(vector<int>& nums, int k) {
    int n=nums.size();
    double ans=INT_MIN,sum=0;
    for(int i=0;i<k;i++){
        sum+=nums[i];
    } 
    ans=max(ans,(sum*1.00)/k);
    int l=0,r=k;
    while(r<n){
        sum-=nums[l];
        sum+=nums[r];
        ans=max(ans,(sum*1.00)/k);
        l++,r++;
    }
    return ans;
}

/* ------ Time complexity = O(n) ------ */
/* ------ space complexity = O(1) ------ */