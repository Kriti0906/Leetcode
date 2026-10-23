class Solution {
public:
    int maxVowels(string s, int k) {
        int c=0;
        string str="aeiou";
        for(int i=0;i<k;i++){
            if(str.find(s[i])!=string::npos)
                c++;
        }
        int maxv=c;
        if(c==k)
            return k;
        else{
            for(int i=k;i<s.length();i++){
                if(str.find(s[i])!=string::npos)
                    c++;
                if(str.find(s[i-k])!=string::npos)
                    c--;
                maxv=max(maxv,c);
                if(maxv==k)
                    return k;
            }
        }
        return maxv;
    }
};