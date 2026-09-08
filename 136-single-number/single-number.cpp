class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>umap;
        int c;
        for(int i=0;i<nums.size();i++){
            umap[nums[i]]++;
        }
        for(auto it:umap){
            if(it.second==1)
                c=it.first;
        }
        return c;
    }
};