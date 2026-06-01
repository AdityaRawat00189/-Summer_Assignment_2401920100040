#include <bits/stdc++.h>

using namespace std;

/* ------ Two Sum ------ */
/* ------ https://leetcode.com/problems/two-sum/ ------ */

vector<int> twoSum(vector<int>& nums, int target) {
    int n=nums.size();
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        if(mp.find(target-nums[i])!=mp.end()){
            return {i,mp[target-nums[i]]};
        }
        mp[nums[i]]=i;
    }
    return {};
}

/* ------ Time complexity = O(n) ------ */
/* ------ space complexity = O(n) ------ */

/* ------ Special Msg :For const space complexity , try sorting O(nlogn) ------ */



/* ------ Remove Duplicates from Sorted Array ------ */
/* ------ https://leetcode.com/problems/remove-duplicates-from-sorted-array/ ------ */

int removeDuplicates(vector<int>& arr) {
    int n=arr.size(),count=0;
    int start=0,end=1;
    while(end<n){
        if(arr[start]!=arr[end]){
         arr[start+1]=arr[end];
         start++,end++;
        }
        else{
            count++;
            end++;
        }
     }
	return arr.size()-count;  
}

/* ------ Time complexity = O(n) ------ */
/* ------ space complexity = O(1) (No Extra Map) ------ */




/* ------ Best Time to Buy and Sell Stock ------ */
/* ------ https://leetcode.com/problems/best-time-to-buy-and-sell-stock/ ------ */

int maxProfit(vector<int>& prices) {
    int n=prices.size();
    if(n==1) return 0;
    int minsofar=prices[0],maxsofar=0;
    for(int i=1;i<n;i++){
       minsofar=min(minsofar,prices[i]);
       maxsofar=max(maxsofar,prices[i]-minsofar);
    }
    return maxsofar;
}

/* ------ Time complexity = O(n) ------ */
/* ------ space complexity = O(1) ------ */