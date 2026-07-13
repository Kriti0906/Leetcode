class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char,int>umap;
        int f1=0,f2=INT_MAX;
        for(int i=0;i<s.length();i++){
            umap[s[i]]++;
        }
        for(auto it:umap){
            if(it.second %2 !=0)
                f1=max(f1,it.second);
            else
                f2=min(f2,it.second);
        }
        return f1-f2;
    }
};