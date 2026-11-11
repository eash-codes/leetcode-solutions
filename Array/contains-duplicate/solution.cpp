/**
 * Problem: Contains Duplicate
 * Difficulty: Medium
 * URL: https://leetcode.com/problems/contains-duplicate/
 * Time Complexity: O(N²)
 * Space Complexity: O(N)
 */

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> freq;

        for(int n : nums ) freq[n]++;

        for(auto& n : freq){
            if(n.second > 1){
                return true;
            } 
        }
        return false;
    }
};