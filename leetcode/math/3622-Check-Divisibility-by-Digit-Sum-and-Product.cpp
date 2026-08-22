class Solution {
public:
    bool checkDivisibility(int n) {
        int org=n;
        vector<int> v;
        while(n>0){
            int last=n%10;
            v.push_back(last);
            n/=10;
        }
        int sum=0;
        int prod=1;
        for(int i=0;i<v.size();i++){
            sum+=v[i];
            prod*=v[i];
        }
        if(org%(sum+prod)==0){
            return true;
        }
        else{
            return false;
        }
    }
};