/**
 * Problem: Top K Frequent Elements
 * Difficulty: Medium
 * URL: https://leetcode.com/problems/top-k-frequent-elements/
 * Time Complexity: O(n log k)
 * Space Complexity: O(n)
 */

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int>freq;
        for(int n : nums) freq[n]++;

        priority_queue<pair<int,int>,
        vector<pair<int,int>>,
        greater<pair<int,int>>
        > mp;

        for(auto& i : freq){
            mp.push({i.second,i.first});
            if(mp.size()>k){
                mp.pop();
            }
        }
        vector<int> ans ;
        while(!mp.empty()){
            ans.push_back(mp.top().second);
            mp.pop();
        }

        return ans ;
    }
};