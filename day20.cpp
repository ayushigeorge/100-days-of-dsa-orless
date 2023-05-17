void f(queue<int> &q,int k){
    if(k==0||q.empty()){
        return;
    }
    int a=q.front();
    q.pop();
    f(q,k-1);
    q.push(a);
}
queue<int> modifyQueue(queue<int> q, int k) {
    // add code here.
    f(q,k);
    int n=(q.size()-k);
    while(n--){
        int a=q.front();
        q.pop();
        q.push(a);
    }
    return q;
}
