class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 1;
        int can = nums[0];

        for(int i = 1 ; i < nums.size(); i++){
        if(count == 0){
            can = nums[i];
            count++;
        }
        else if(nums[i]==can){
            count++;
        }
        else{
            count--;
        }
        }

        return can;
    }
};