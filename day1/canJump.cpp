class Solution {
public:
    bool canJump(vector<int>& nums) {
        int max = 0;
        for( int i = 0 ; i < nums.size() ; i++){
            if(i>max)return false;
            max = (max>nums[i]+i?max:nums[i]+i);
        }
        return true;
    }
};