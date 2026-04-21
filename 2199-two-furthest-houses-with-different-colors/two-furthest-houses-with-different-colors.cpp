class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int maxd=0,n=colors.size();
        for(int i=0;i<n;i++){
            if(colors[i]!=colors[0]){
                maxd=max(maxd,i);
            }
            if(colors[i]!=colors[n-1]){
                maxd=max(maxd,n-1-i);
            }
        }
        return maxd;
    }
};