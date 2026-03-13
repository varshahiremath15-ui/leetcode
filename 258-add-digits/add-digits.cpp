class Solution {
public:
    int addDigits(int num) {
       while(num>=10)
       {
        int rev=0;
        while(num>0)
        {
            int digit=num%10;
            rev=rev+digit;
            num=num/10;
        }
        num=rev;

       }
       return num;
        
    }
};