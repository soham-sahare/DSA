/*
 * @lc app=leetcode id=217 lang=cpp
 *
 * [217] Contains Duplicate
 */

// @lc code=start
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        unordered_map<int, int> map;

        for(int i = 0; i < nums.size(); i++){

            map[nums[i]] += 1;
            
            if(map[nums[i]] > 1){
                return true;
            }
        }

        return false;
    }
};
// @lc code=end