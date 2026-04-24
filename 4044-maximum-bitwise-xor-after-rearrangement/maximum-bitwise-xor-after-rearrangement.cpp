class Solution {
public:
    string maximumXor(string s, string t) {
        int o=0,z=0;
        string res="";
        for(char i:t){
            if(i=='0')
                z++;
            else
                o++;    
        }
        for(int i=0;i<s.length();i++){
            if(s[i]=='0'){
                if(o>0){
                    res+='1';
                    o--;
                }
                else{
                    res+='0';
                    z--;
                }
            }
            else{
                if(z>0){
                    res+='1';
                    z--;
                }
                else{
                    res+='0';
                    o--;
                }
            }
        }
        return res;
    }
};