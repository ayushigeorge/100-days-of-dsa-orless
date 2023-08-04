class Solution{
public:
    void Reverse(stack<int> &St){
        if(St.empty()) return;
        int topElement= St.top();
        St.pop();
        Reverse(St);
        Insertbottom(St, topElement);
    }
    private:
    void Insertbottom(stack<int>&St, int val){
        if(St.empty()){
            St.push(val);
            return;
            
        }
        int topElement=St.top();
        St.pop();
        Insertbottom(St,val);
        St.push(topElement);
    }
};
