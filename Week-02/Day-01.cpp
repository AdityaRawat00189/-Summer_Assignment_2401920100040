#include <bits/stdc++.h>

using namespace std;

/* ------ Valid Anagram ------ */
/* ------ https://leetcode.com/problems/valid-anagram/ ------ */

bool isAnagram(string s, string t) {
    vector<int>temp1(26,0);
    vector<int>temp2(26,0);
    int n=s.size(),c=t.size();
    if(n!=c) return false;
    
    for(int i=0;i<n;i++){
        int index=(int)s[i]-97;
        temp1[index]++;
    } 
    
    for(int i=0;i<c;i++){
        int index=(int)t[i]-97;
        temp2[index]++;
    } 
    
    for(int i=0;i<26;i++){
        if(temp1[i]!=temp2[i]){
        return false;
        }
    }
    return true;
}



/* ------ First Unique Character in a String ------ */
/* ------ https://leetcode.com/problems/first-unique-character-in-a-string/ ------ */

int firstUniqChar(string s) {
    vector<int>temp(27,0);
    int n=s.size();
    for(int i=0;i<n;i++){
        temp[s[i]-96]++;
    }
    for(int i=0;i<n;i++){
        if(temp[s[i]-96]==1) return i;
    }
    return -1;
}



/* ------ Ransom Note ------ */
/* ------ https://leetcode.com/problems/ransom-note/ ------ */

bool canConstruct(string ransomNote, string magazine) {
    vector<int>temp1(28,0);
    vector<int>temp2(28,0);
    for(int i=0;i<ransomNote.size();i++){
        temp1[ransomNote[i]-'a']++;
    }
    for(int i=0;i<magazine.size();i++){
        temp2[magazine[i]-'a']++;
    }
    for(int i=0;i<ransomNote.size();i++){
        if(!(temp1[ransomNote[i]-'a']<=temp2[ransomNote[i]-'a'])) return 0;
    }
    return 1;
}
