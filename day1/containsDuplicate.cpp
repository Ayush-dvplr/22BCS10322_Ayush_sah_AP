class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>umap;
        for(int n : nums){
            if(!umap[n])
            umap[n] += 1;
            else
            return true;
        }
        return false;
    }
};