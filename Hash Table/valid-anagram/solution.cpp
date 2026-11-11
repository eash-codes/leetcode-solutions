/**
 * Problem: Valid Anagram
 * Difficulty: Medium
 * URL: https://leetcode.com/problems/valid-anagram/
 * Time Complexity: O(N²)
 * Space Complexity: O(1)
 */

class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> freq(26,0);

        if(s.size()!= t.size()){
        return false;
        }
        for(char c : s) freq[c -'a']++;
        
        for(char c : t) freq[c -'a']--;

        for(int i : freq){
            if(i != 0){
                return false;
            }
        }
        return true ; 
    }
};