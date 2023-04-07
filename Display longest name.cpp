public:
    string longest(string names[], int n)
    {
        int min=0;
        int p=0;
        for(int i=0;i<n;i++)
        {
            if(min<names[i].length() )
            {
                min=names[i].length();
                p=i;
            }
        }
        return names[p];
    }
