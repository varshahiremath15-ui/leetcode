class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)return false;
        int rev=0;
        int num= x;
        while(num!=0)
        {
            int digit=num%10;
            if(rev > INT_MAX / 10 ||
              (rev == INT_MAX/ 10 && digit > 7)){
                return false;
            }
            
            rev=rev*10+digit;
            num/=10;
        }
        return rev==x;


        
    }
    
    
};