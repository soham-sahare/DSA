/*
 * @lc app=leetcode id=242 lang=cpp
 *
 * [242] Valid Anagram
 */

// @lc code=start
class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.size() != t.size()){
            return false;
        }

        unordered_map<char, int> map;

        for(int i = 0; i < s.size(); i++){
            map[s[i]]++;
            map[t[i]]--;
        }

        for(int i = 0; i < map.size(); i++){
            if(map[i] != 0){
                return false;
            }
        }

        return true;
    }
};
// @lc code=end

