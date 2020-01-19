class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        for(int i = 0; i < nums.size(); i++){
            int need = target - nums[i];
            //if need = nums[i]
            for(int j = 0; j < nums.size(); j++){
                if(nums[j] == need and i != j){
                    res.push_back(i);
                    res.push_back(j);
                    return res;
                }
            }
        } 
        return res;
    }
};
