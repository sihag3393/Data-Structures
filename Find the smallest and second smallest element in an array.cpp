vector<int> v;
    sort(a,a+n);
    v.push_back(a[0]);
    for(int i=1;i<n;i++)
    {
        if(v[0]!=a[i])
        {
            v.push_back(a[i]);
            break;
        }
        else
        {
            continue;
        }    
        
    }
    if(v.size()==2){
    return v;
    }else{
        return {-1};
    }
