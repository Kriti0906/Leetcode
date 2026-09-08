class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int>ans(2);
        map<int,int>umap;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid.size();j++){
                umap[grid[i][j]]++;
            }
        }
        for(auto it:umap){
            if(it.second==2)
                ans[0]=it.first;
        }
        for(int i=1;i<=grid.size()*grid.size();i++){
            if(umap.find(i)==umap.end()){
                ans[1]=i;
                break;
            }
        }
        return ans;
    }
};