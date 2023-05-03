class Solution{
  public:
    int majorityElement(int a[], int size){
        int cnt = 0;
        int element;
        
        for(int i=0;i<size;i++){
            if(cnt == 0){
                cnt = 1;
                element = a[i];
            }
            else if(element == a[i]) cnt++;
            else cnt--;
        }
        
        int cntElement = 0;
        for(int i=0;i<size;i++){
            if(a[i] == element) cntElement++;
        }
        if(cntElement > size/2) return element;
        return -1;
    }
};
