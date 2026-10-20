class Solution {
public:
    string reverseWords(string s) {
        vector<string>vec;
        string word="";
        stringstream ss(s);
        while(ss >> word)
            vec.push_back(word);
        reverse(vec.begin(),vec.end());
        string str;
        for(int i=0;i<vec.size();i++){
            if(i>0)
                str+=" ";
            str+=vec[i];
        }
        return str;
    }
};