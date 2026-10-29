/**
 * Problem: Intersection Of Two Arrays
 * Difficulty: Medium
 * URL: https://leetcode.com/problems/intersection-of-two-arrays/
 * Time Complexity: O(n + m) average time, where n is nums1.size() and m is nums2.size().
 * Space Complexity: O(n + min(n, m)) space to store elements in the hash sets.
 */

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s(nums1.begin(),nums1.end());
        unordered_set<int> result;
        for (int num : nums2){
            if(s.count(num)){
                result.insert(num);
            }
        }
        return vector<int>(result.begin(),result.end());
    }
};