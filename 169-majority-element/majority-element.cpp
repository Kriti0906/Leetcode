class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maxc=INT_MIN,maxe;
        unordered_map<int,int>umap;
        for(int i=0;i<nums.size();i++){
            umap[nums[i]]++;
        }
        for(auto it:umap){
            if(it.second>maxc){
                maxc=it.second;
                maxe=it.first;
            }
        }
        return maxe;
    }
};