class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int total = 0;
        
        for (const auto& elements : nums)
            total += elements;
        
        int lSum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            total -= nums[i];
            if(lSum == total)
                return i;
            
            lSum += nums[i];
        }
        
        //0일때  0 == 1 7 + 3 + 6 + 5 + 6
        //1일때  1 == 3 + 6 + 5 + 6
        //2일때 0 + 1 + 7 == 6 + 5 + 6
        //3일떄 0 + 1 + 7 + 3 == 5 + 6
        //4일떄 0 + 1 + 7 + 3 + 6 == 6
        //5일때 0 + 1 + 7 + 3 + 6 + 5 == 0
        
        return -1;
    }
};