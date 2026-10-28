/**
 * Problem: Two Sum
 * Difficulty: Medium
 * URL: https://leetcode.com/problems/two-sum/
 * Time Complexity: O(n)
 * Space Complexity: O(n)
 */

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        int complement = 0;
        for(int i = 0 ; i < nums.size() ;++i){
            complement = target - nums[i];
        if(mp.find(complement)!=mp.end() ){
            return {mp[complement],i} ;
        }
        mp[nums[i]] =i;
        }
        return {};
    }
};