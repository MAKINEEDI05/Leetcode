class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        int a=0,i=0,n=words.size();
        string b=words[0];
        sort(b.begin(),b.end());
        for(i=1;i<words.size();i++){
            string val=words[i];
            sort(val.begin(),val.end());
            if(b==val){
                words.erase(words.begin()+i);
                i--;
            }
            else{
                b=words[i];
                sort(b.begin(),b.end());
            }
        }
        return words;
    }
};