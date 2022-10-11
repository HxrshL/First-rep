class Solution {
public:
    int strStr(string s, string a) {
        if(s.size()<a.size())
            return -1;
        int r=0;int i;
        for(i=0;i<s.size();i++){
            for(int j=0;j<a.size();j++){
                if(i+j<s.size()&&s[i+j]==a[j]){
                    r++;
                }
                
            }
            if(r==a.size())break;
            r=0;
        }
        if(i==s.size())
            return -1;
                                    else
        return i;
    }
};
