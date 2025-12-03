class Solution {
public:
    bool isPalindrome(int x) {
        int temp=x;
        int r=0;
        long long int k =0;
        if(x<0){
            return false;
        }
        while(temp!=0){
            r=temp%10;
            k=(k*10)+r;
            temp=temp/10;

        }
        if(x==k){
            return true; 
        }
        return false;
    }
};