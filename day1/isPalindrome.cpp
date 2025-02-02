class Solution {
public:
    bool isPalindrome(string s) {
        if(s.length()==0 || s.length() == 1)
        return true;
        transform(s.begin(),s.end(),s.begin (),::tolower);
        bool small;
        if(s[0]<'a' || s[0] > 'z')
        

        return true;
    }
};