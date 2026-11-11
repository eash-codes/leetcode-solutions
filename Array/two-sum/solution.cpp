/**
 * Problem: Two Sum
 * Difficulty: Medium
 * URL: https://leetcode.com/problems/two-sum/
 * Time Complexity: O(N)
 * Space Complexity: O(N)
 */

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;

        for(int i = 0 ; i < nums.size() ; ++i){
            int complement = target - nums[i];
            if(mp.find(complement)!= mp.end()){
                return {mp[complement],i};
            }
            else{
                mp[nums[i]] = i;
            }
        }
        return {};
    }
};