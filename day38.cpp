
class Solution{
    public:
        vector<int> common_element(vector<int>v1,vector<int>v2)
    {
        vector<int >v;
        // Your code here
        //sort kiya
        sort(v1.begin(),v1.end());
        sort(v2.begin(), v2.end());
        //pointer banaye
        int i=0; 
        int j=0;
        //list mein same hai toh push krwaya and pointer ko increase kiya
        while(i<v1.size() && j<v2.size()){
            if(v1[i]==v2[j]){
                v.push_back(v1[i]);
                i++;
                j++;
            }
            //agar v1 bada ai toh j pointer ko ++ krdo
            else if(v1[i]>v2[j]){
                j++;
            }
            //agar v2 bada hai toh i pointer ko ++ krdo
            else {
                i++;
            }
        }
        //return kardao vector v ko;
        return v;

    }
};
