class Solution {
public:
    int maxProfit(vector<int>& p) {
        int pf=0;
        for(int i=1; i<p.size(); i++){
            if(p[i]>p[i-1]){
                pf+=(p[i]-p[i-1]);
            }
        }
        return pf;
    }
};
