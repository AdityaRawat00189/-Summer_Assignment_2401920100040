#include <bits/stdc++.h>

using namespace std;

/* ------ Valid Palindrome ------ */
/* ------ https://leetcode.com/problems/valid-palindrome/ ------ */

bool isPalindrome(string s) {
    int start=0;
    int end=s.size()-1;
    while(start<=end){
        if(!isalnum(s[start])){start++; continue;}
        if(!isalnum(s[end])){end--;continue;}
        if(tolower(s[start])!=tolower(s[end]))return false;
        else{
            start++;
            end--;
        }
    }
    return true;
}

/* ------ Time complexity = O(n) ------ */
/* ------ space complexity = O(1) ------ */



/* ------ Reverse the String ------ */
/* ------ https://leetcode.com/problems/reverse-string/ ------ */

void reverseString(vector<char>& s) {
    int n=s.size(),start=0,end=n-1;
    while(start<end){
        char temp=s[start];
        s[start]=s[end];
        s[end]=temp;
        start++,end--;
    }
}

/* ------ Time complexity = O(n)  ------ */
/* ------ space complexity = O(1)  ------ */




/* ------ Longest Common Prefix ------ */
/* ------ https://leetcode.com/problems/longest-common-prefix/ ------ */

string longestCommonPrefix(vector<string>& strs) {
    string ans="";
    int n=strs.size();
    int len=INT_MAX;
    for(int i=0;i<n;i++) {
        int x=strs[i].size();
        len=min(len,x);
    }
    // cout<<len;
    for(int i=0;i<len;i++){
        char same=strs[0][i];
        cout<<same<<" ";
        for(int j=0;j<n;j++){
            if(same!=strs[j][i]) return ans;
        }
        ans+=same;
    }
    return ans;
}

/* ------ Time complexity = O(n*m) ------ */
/* ------ n = number of strings, m = length of the shortest string ------ */
/* ------ space complexity = O(1) ------ */