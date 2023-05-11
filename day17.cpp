class Solution{
public:
    string rremove(string s){
        bool duplicate = 0;                     
        string ansString = "";                
                                               
        for(int i = 0; i < s.size(); i++){
            if(s[i] == s[i+1]){               
                duplicate = 1;                
                int end = i;
                while(s[i] == s[end]){
                    end++;
                }
                i = end-1;
            }else{                            
                ansString += s[i];
            }
        }
        if(duplicate){                        
          return rremove(ansString);         
        }
         return s;                             
    }
};
