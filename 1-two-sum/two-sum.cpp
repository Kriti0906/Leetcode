class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {       
        unordered_map<int,int>umap;
        for(int i=0;i<nums.size();i++){
            int rem=target-nums[i];
            if(umap.find(rem)!=umap.end()){
                return {umap[rem],i};
            }
            umap[nums[i]]=i;
        }
        return {};
    }
};