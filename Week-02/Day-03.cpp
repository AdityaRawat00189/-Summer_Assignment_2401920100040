#include <bits/stdc++.h>

using namespace std;

/* ------ Find the Index of the First Occurrence in a String ------ */
/* ------ https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/ ------ */

int strStr(string haystack, string needle) {
    int n = haystack.size(), m = needle.size();
    for(int i=0;i<n-m+1;i++) {
    if(haystack[i] != needle[0]) continue;
    bool check = true;
    int idx = i;
    for(int j=0;j<m;j++){
        if(haystack[idx] != needle[j]){
            check = false;
            break;
        } 
        idx++;
    }
    if(check) return i;
    }
    return -1; 
}



/* ------ Is Subsequence ------ */
/* ------ https://leetcode.com/problems/is-subsequence/ ------ */

int count=0;
for(int i=0,j=0;i<n && j<m;){
    if(s[i]==t[j]) {
        count++;
        i++,j++;
    }
    else {
        j++;
    }
}
return count==n;



/* ------ Repeated Substring Pattern ------ */
/* ------ https://leetcode.com/problems/repeated-substring-pattern/ ------ */

bool repeatedSubstringPattern(string s) {
    int n = s.size();
    unordered_map<string,int>mp;

    for(int i=0;i<n;i++) {
        string temp = "";
        for(int j=i;j<n;j++) {
            temp += s[j];
            // cout<<temp<<" ";
            mp[temp]++;
        }
    }

    for(auto it=mp.begin();it!=mp.end();it++) {
        // cout<<it->first<<" "<<it->second<<"    ";
        if(1ll*(it->first).size()*it->second == n && it->second != 1) return true;
    }

    return false;
}