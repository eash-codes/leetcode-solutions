/**
 * Problem: Group Anagrams
 * Difficulty: Medium
 * URL: https://leetcode.com/problems/group-anagrams/
 * Time Complexity: O(n * k log k)
 * Space Complexity: O(n * k)
 */

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        string key = "";
        for(string str : strs){
            string key = str;
            sort(key.begin(),key.end());
            mp[key].push_back(str);
        }

        vector<vector<string>> temp;
        for(auto& str : mp){
            temp.push_back(str.second);
        }
        return temp;
    }
};