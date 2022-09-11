class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
                 
        int sum = 0;                    
        
        vector<int> result;
        result.reserve(nums.size());
        result.resize(nums.size());
        for(int i = 0; i < nums.size(); i++)
        {                                    
            sum += nums[i];
            //result[i] = sum;
            //sumMax++;
            result[i] = sum;
        }
        
        return result;
    }
};