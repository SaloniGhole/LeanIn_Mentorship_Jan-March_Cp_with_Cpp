int firstUniqChar(string s) {
        unordered_map<int,int> m;
        for(auto a: s)
            m[a]++;
        for(int i=0; i<s.size(); i++)
        {
            auto it = m.find(s[i]);
            if(it->second == 1)
                return i;
        }
        return -1;
    }
