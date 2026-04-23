class Solution {
public:
    vector<long long> distance(vector<int>& nums) {
        vector<long long> dis(nums.size());
        unordered_map<int,vector<int>>umap;
        for(int i=0;i<nums.size();i++)
            umap[nums[i]].push_back(i);
        for(auto &it:umap){
            vector<int> &v=it.second;
            long long sum=0;
            for(int x:v)
                sum+=x;
            long long pre=0;
            for(int i=0;i<v.size();i++){
                long long idx=v[i];
                long long left=(1LL*i*idx)-pre;
                long long right=(sum-pre-idx)-(1LL*(v.size()-i-1)*idx);
                dis[idx]=left+right;
                pre+=idx;
            }    
        }
        return dis;
    }
};