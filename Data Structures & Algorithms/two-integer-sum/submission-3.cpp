class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen;
        for(int i = 0; i < nums.size(); i++){
            int missing = target - nums[i];
            if(seen.count(missing)){ // Have you seen the missing number?
                return{seen[missing], i}; // Return the indexes
            } else{
                seen[nums[i]] = i; // Else push it to the hash map
            }
        }
        return{};
    }
};
