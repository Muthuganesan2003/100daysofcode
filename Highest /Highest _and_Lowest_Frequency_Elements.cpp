vector<int> getFrequencies(vector<int>& v) {
    int min=INT_MAX;
    int max=INT_MIN;
    int minele=INT_MAX;
    int maxele;
    int temp_maxele=INT_MAX;
    map<int,int>mp;
    for(int i=0;i<v.size();i++){
        mp[v[i]]++;
    }
    for(auto it:mp){
        if(it.second>max)max=it.second;
        if(it.second<min)min=it.second;
    }
    for(auto it:mp){
        if(max==min){
          if(it.second==min&&it.first<minele)minele=it.first;
          maxele=minele;  
        }
        else{
             if(it.second==min&&it.first<minele)minele=it.first;
        if(it.second==max&&it.first<temp_maxele)temp_maxele=it.first;
        maxele=temp_maxele;
        }
       

    }
    return{maxele,minele};

}
