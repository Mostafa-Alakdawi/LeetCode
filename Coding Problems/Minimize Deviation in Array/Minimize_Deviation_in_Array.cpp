class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        
        set <int> NUMS;
        
        for(auto num:nums){
            
            if(num%2 != 0)
                NUMS.insert(num*2);
            else
                NUMS.insert(num);
        
        }
        
        int difference = *NUMS.rbegin() - *NUMS.begin();
        
        while(NUMS.size() && *NUMS.rbegin()%2 == 0){
            
            int max = *NUMS.rbegin();
            NUMS.erase(*NUMS.rbegin());
            NUMS.insert(max/2);
            
            difference = min(difference, *NUMS.rbegin() - *NUMS.begin());
        }
                
        return difference;
    }

};
