class Solution {
public:
    bool isPalindrome(string s) {
        bool yes=true;
        int start=0,end=s.size()-1;
        while(start<=end){
            while(start < end && !isalnum(s[start])) start++;
            while(start < end && !isalnum(s[end])) end--;
            if(tolower(s[start])!=tolower(s[end])){
                return false;
            }
            start++;
            end--;
        }
        return yes;
        
    }
};
