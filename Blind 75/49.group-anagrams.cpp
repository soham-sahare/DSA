/*
 * @lc app=leetcode id=49 lang=cpp
 *
 * [49] Group Anagrams
 */

// @lc code=start
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
		if(strs.size() == 1){
            return {{strs[0]}};
        }

        vector<vector<string>> ans;
        unordered_map<string, vector<string>> map;

        for(int  i = 0; i < strs.size(); i++){
            string str = strs[i];
            sort(strs[i].begin(), strs[i].end()); 
            map[strs[i]].push_back(str);  
        }
        
        for(auto i = map.begin(); i != map.end(); i++){
            ans.push_back(i -> second); 
        }

        return ans;
    }
};
// @lc code=end

