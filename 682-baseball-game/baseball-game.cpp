class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int>nums;
        int score=0;
        for(int i=0;i<operations.size();i++){
            if(operations[i]=="D")
                nums.push_back(2*nums.back());
            else if(operations[i]=="+")
                nums.push_back(nums[nums.size()-1]+nums[nums.size()-2]);
            else if(operations[i]=="C")
                nums.pop_back();
            else
                nums.push_back(stoi(operations[i]));
        }
        for(int i=0;i<nums.size();i++)
            score+=nums[i];
        return score;
    }
};