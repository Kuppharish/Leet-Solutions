    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        vector<vector<string>> res;
        sort(products.begin(),products.end());
        string cur = "";
        auto it = products.begin();
        for(char c:searchWord){
            cur+=c;
            vector<string> suggested;
            it = lower_bound(it,products.end(),cur); //finding the index of first element of vector that is less than cur
            for(int j=0;j<3&&it+j!=products.end();++j){
                string& s = *(it+j);
                if(s.find(cur)) break; //checking if first subset of cur is in 0 index
                suggested.push_back(s);
            }
            res.push_back(suggested);
        }
        return res;
    }
