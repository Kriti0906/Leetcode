class Solution {
public:
    bool isPalindrome(int x) {
        if(x>=0 && x<9) return true;
        if(x<0) return false;
        int n=x;
        long r=0;
        while(n!=0){
            int d=n%10;
            r=r*10+d;
            n=n/10;
        }
        if(x==r)   
            return true;
        return false;
    }
};