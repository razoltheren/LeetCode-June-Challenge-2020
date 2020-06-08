bool compare(vector<int> a,vector<int> b){
    return (a[0]-a[1])<(b[0]-b[1]);
}

class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        sort(costs.begin(),costs.end(),compare);
        int ans=0,op1,op2,n=costs.size();
        for(int i=0;i<n/2;++i)
            ans+=costs[i][0];
        for(int i=n/2;i<n;++i)
            ans+=costs[i][1];
        return ans;
    }
};
