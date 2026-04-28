class Solution {
public:
    string getPermutation(int n, int k) {
        int fact=1;
        vector<int>nums;
        for(int i=1;i<n;i++){
            fact*=i;
            nums.push_back(i);
        }
        nums.push_back(n);
        k--;
        string res="";
        while(true){
            int idx=k/fact;
            res+=to_string(nums[idx]);
            nums.erase(nums.begin()+idx);
            if(nums.size()==0)
                break;
            k=k%fact;
            fact=fact/nums.size();
        }
        return res;
    }
};