class Solution {
public:
    string reverseWords(string s) {
        int i=0; // starting 
        int n=s.length(); //storing length of string 
        string result; // creating string for storing result
        while(i<n) //keep traverse in string 
        {
            while(i<n && s[i]==' ') i++; // now find traversing the white spaces untilll you find a character 
            if(i>=n) break; // checking the corner case  if string is empty
            int j=i+1; //initialing variable for traversing after found  character
            while(j<n && s[j]!=' ') j++; //keep traversing untill find space 
            string sub=s.substr(i,j-i); //maintaining the substring until the white space 
            if(result.length()==0) //checking for corner case if it is the first string we are storing in result 
            {
                result=sub;// storing that substring in result 
            }
            else{
                result=sub+" "+result; // if it was not first substring that means result storing some other sting also so we need to add the new substring  before the older one 
            }
            i=j+1; // set i=j+1 for keep traversing 
        }
        return result;
    }
};