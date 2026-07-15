class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_map<int,int>umap;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                umap[nums[i]]++;
            }
        }
        int n=1;
        while(umap.find(n)!=umap.end())
            n++;
        return n;
    }
};