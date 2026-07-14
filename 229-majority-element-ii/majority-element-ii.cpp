class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        vector<int>res;
        unordered_map<int,int>umap;
        for(int i=0;i<n;i++)
            umap[nums[i]]++;
        for(auto it:umap){
            if(it.second>n/3)
                res.push_back(it.first);
        }
        return res;
    }
};