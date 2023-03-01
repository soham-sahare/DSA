/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int> map;

        for(int i = 0; i < nums.size(); i++){
            
            int current = nums[i];

            if(map.find(target - current) != map.end()){
                return {map[target - current], i};
            }

            map[current] = i;
        }

        return {};
    }
};
// @lc code=end

