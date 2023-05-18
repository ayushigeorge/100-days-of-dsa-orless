  static bool Sorter(pair<int,int> &a,pair<int,int> &b){
        if(a.first==b.first) return a.second<b.second;
        else return a.first<b.first;
    }
    int activitySelection(vector<int> start, vector<int> end, int n)
    {
        vector<pair<int,int>> store;
        
        for(int i = 0;i<n;i++){
            store.push_back({start[i],end[i]});
        }
        
        sort(store.begin(),store.end(),Sorter);
        
        int actdays = 0,enddate = -1;
        
        for(int i = 0;i<n;i++){
            if(store[i].first>enddate){
                actdays++;
                enddate = store[i].second;  
            }
            else{
                if(store[i].second<enddate){
                    enddate = store[i].second;
                }
            }
        }
        
        return actdays;
    }
