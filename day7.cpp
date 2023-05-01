vector<pair<int,int>>v;
       for(int i=0;i<n;i++){
           v.push_back({intervals[i][0],1});
           v.push_back({intervals[i][1]+1,-1});
       }
       sort(v.begin(),v.end());
       int sum=0,ans=-1;;
       for(auto i:v){
           if(sum>=k)ans=i.first-1;
           sum+=i.second;
       }
       return ans;
