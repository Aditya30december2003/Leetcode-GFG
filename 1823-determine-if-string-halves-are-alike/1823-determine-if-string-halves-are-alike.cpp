class Solution {
public:
    int Count(string s){
        int count=0;
        for(int i=0;i<s.size();i++){
if(s[i]=='a' ||s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u' ||s[i]=='A' ||s[i]=='E' ||s[i]=='I' ||s[i]=='O' ||s[i]=='U'){
          count++;
            }
        }
        return count;
    }
    bool halvesAreAlike(string s) {
        int st =0 , e = s.size()-1;
        int mid = st+(e-st)/2;

        string firstHalf="";
        string secondHalf="";

        for(int i=0;i<=mid;i++)
        firstHalf+=s[i];

        for(int i=mid+1 ; i<=e;i++)
        secondHalf+=s[i];

        int cFirst = Count(firstHalf);
        int cSecond = Count(secondHalf);

        return cFirst==cSecond;
    }
};