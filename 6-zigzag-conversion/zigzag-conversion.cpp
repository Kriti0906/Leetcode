class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1) return s;
        vector<string> row(numRows);
        int i=0,idx=1;
        for(char ch:s){
            row[i]+=ch;
            if(i==0)
                idx=1;
            else if(i==numRows-1)
                idx=-1;
            i+=idx;     
        }
        string str;
        for(string r:row)
            str+=r;
        return str;
    }
};