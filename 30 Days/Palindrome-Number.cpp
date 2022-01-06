class Solution {
public:
    bool isPalindrome(int x) {
        int temp,s=x;
        long int y=0;
        
        if(x<0)
            { 
            return false;
            }
        
        else{
            while(s)
                {temp=s%10;
                y=y*10+temp;
                s=s/10;
                }
            if(y==x)
                return true;
        return false;   
            }
                            }       

};
https://leetcode.com/problems/palindrome-number/
