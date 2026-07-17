class Solution {
public:
    bool isPalindrome(int x) {
        int temp=x;
        if(x<0) return false;
        int rev=0;
        while(temp!=0){
            int rem=temp%10;
            temp=temp/10;
            if(rev>=INT_MAX/10) return false;
            rev=rev*10+rem;
        }
         
        return rev==x || x<9;
    }
};