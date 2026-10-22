class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int,int>umap;
        int c=0;
        for(int x:nums){
            int req=k-x;
            if(umap[req]>0){
                c++;
                umap[req]--;
            }
            else{
                umap[x]++;
            }
        }
        return c;
    }
};