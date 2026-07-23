class Solution {
public:
    string reverseWords(string s) {
        string t = "";
        string res =""; 
        for(int i =s.length()-1;i>=0;i--){
            if(s[i]==' '){
                if(t==""){
                    continue;
                }
                reverse(t.begin(),t.end());
                if(!res.empty()){
                    res += " ";
                }
                res += t;
                t = "";
            }else{
                t = t+ s[i];
            }
        }
        if(t!=""){
            reverse(t.begin(),t.end());
            if(!res.empty()){
                    res += " ";
                }
            res = res + t;
            t = "";
        }
        return res;

    }
};