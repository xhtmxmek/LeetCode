class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
        int output = 0; 
        int sumMax = 1;
        
        vector<int> result;
        result.reserve(nums.size());
        result.resize(nums.size());
        for(int i = 0; i < nums.size(); i++)
        {            
            int sum = 0;            
            for(int j = 0; j < sumMax; j++)
            {
                if(sumMax <= nums.size())                
                    sum += nums[j];                                                    
            }
            
            result[i] = sum;
            sumMax++;
        }
        
        return result;
    }
};