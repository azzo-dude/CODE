class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n=letters.size();
        int l=0,r=n-1;
        while(l<=r){
            int m = (l+r)/2;
            if(letters[m]<=target){
                l=m+1;
            }
            else{
                r=m-1;
            }
        }
        if(l==n){
            return letters[0];
        }
        else{
            return letters[l];
        }
    }
};
