class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size();
        int i=0,w=0;
        while(i<n){
            int c=0;
            char ch=chars[i];
            while(i<n && chars[i]==ch){
                c++;
                i++;
            }
            chars[w++]=ch;
            if(c>1){
                string s=to_string(c);
                for(char c:s){
                    chars[w++]=c;
                }
            }
        }
        return w;
    }
};