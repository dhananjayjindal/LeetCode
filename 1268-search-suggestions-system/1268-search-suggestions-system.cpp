class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
       int top=0;
        for(int i=0;i<products.size();i++)
            if(products[i][0]==searchWord[0])products[top]=products[i],top++;
        
        products.resize(top);
        
        sort(products.begin(),products.end());
        
        vector<vector<string>> ans;
        
        int a=0;
        int i=0;
        while(a<searchWord.size()){
            while(i<products.size() && products[i].substr(0,a+1)!=searchWord.substr(0,a+1))i++;
            
            vector<string> v;
            for(int j=i;j-i<3 && j<products.size();j++)
                if(searchWord.substr(0,a+1)==products[j].substr(0,a+1))v.push_back(products[j]);
            
            ans.push_back(v);
            a++;
        }
        
        return ans; 
    }
};