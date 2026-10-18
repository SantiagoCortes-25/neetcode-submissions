class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen; // number, position
        for (int i = 0; i < nums.size(); i++){
            int missing = target - nums[i]; 

            if(seen.count(missing)){
                return {seen[missing], i};
            }
            seen[nums[i]] = i;
        }
        return {};
    }
};
