class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int j = 0;
        int i = 0;
        while( i < n){
            char current = chars[i];
            int count = 0;

            while(i < n && chars[i]==current){
                i++;
                count++;
            }
            chars[j++] = current;
            if(count > 1){
                string cnt = to_string(count);
                for(auto i : cnt){
                    chars[j++]=i;
                }
            }
        }
        return j ;
    }
};