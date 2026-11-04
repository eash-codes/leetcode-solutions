/**
 * Problem: Top K Frequent Elements
 * Difficulty: Medium
 * URL: https://leetcode.com/problems/top-k-frequent-elements/
 * Time Complexity: O(N log k), where N is the size of nums and k is the target frequency threshold. Counting takes O(N), and inserting U unique elements into a min-heap of max size k takes O(U log k).
 * Space Complexity: O(U + k), where U is the number of unique elements in nums stored in the frequency map, and k is the size limit of the min-heap. In the worst case, this is O(N).
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