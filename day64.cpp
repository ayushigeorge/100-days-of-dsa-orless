class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string S)
    {
       //Your code here
       vector<int>hash(26,0);
       for(int i=0; i<S.size();i++){
           hash[S[i]-'a']+=1;
           
       }
       for(int i=0;i<S.size();i++){
           if(hash[S[i]-'a']==1) return (char)S[i];
       }
       return '$';
       
    }
};
