/*
 * This code runs on LeetCodde playground with no problems
 * But can't be executed on local machines without making a few changes
 */

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> result;
        
        for(int index_1 = 0; index_1 < nums.size(); index_1++){
            
            for(int index_2 = index_1+1; index_2 < nums.size(); index_2++){
                
                if(nums[index_1] + nums[index_2] == target){
                    std::cout << nums[index_1] <<" "<< nums[index_2] <<std::endl;
                    result.push_back(index_1);
                    result.push_back(index_2);
                }
            }

        }
        
        return result;
        
    }
};

