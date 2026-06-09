#include <bits/stdc++.h>

using namespace std;

/* ------ Longest Substring Without Repeating Characters ------ */
/* ------ https://leetcode.com/problems/longest-substring-without-repeating-characters/ ------ */

int lengthOfLongestSubstring(string s) {
    vector<bool>temp(257,0);
    int n=s.size();
    int start=0,end=0,maxlen=0,len=0;
    while(end<n){
        while(temp[s[end]]==1){
            temp[s[start]]=0;
            start++;
        } 
        len=max(len,end-start+1);
        temp[s[end]]=1;
        end++;
    }
    return len;
}



/* ------ Permutation in String ------ */
/* ------ https://leetcode.com/problems/permutation-in-string/ ------ */

bool checkInclusion(string s1, string s2) {
    int n = s1.size(), m = s2.size();
    vector<int>freq(28,0);
    vector<int>temp(28,0);

    for(int i=0;i<n;i++) freq[s1[i] - 'a']++;
    
    int prev = 0;
    for(int i=0;i<m;i++) {
        int idx = s2[i]-'a';
        temp[idx] ++;

        if(i - prev == n) temp[s2[prev]-'a']--, prev++ ;

        if(temp == freq) return true;
    }

    return false;
}



/* ------ Find All Anagrams in a String ------ */
/* ------ https://leetcode.com/problems/find-all-anagrams-in-a-string/ ------ */

vector<int> findAnagrams(string s, string p) {
    vector<int>freq(28,0);
    vector<int>temp(28,0);
    vector<int>ans;
    int n = p.size(), m = s.size();
    
    for(int i = 0;i<n;i++) {
        freq[p[i] - 'a'] ++;
    }

    int prev = 0;
    for(int i=0;i<m;i++) {
        temp[s[i] - 'a'] ++;

        if(i - prev == n) temp[s[prev]-'a']-- , prev ++;

        if(temp == freq) {
            ans.push_back(prev);
        }
    }

    return ans;
}
