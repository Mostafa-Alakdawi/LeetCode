/*
 * This code runs on LeetCodde playground with no problems
 * But can't be executed on local machines without making a few changes
 */

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
    
        unordered_set<int> hashset;
        for (auto num : nums) {
            if (hashset.count(num) > 0) {
                return true;
            }
            hashset.insert(num);
        }
        return false;        
    }
};
