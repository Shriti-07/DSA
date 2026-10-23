class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int greed=0;
        int cookies=0;
        while(greed<g.size() && cookies<s.size()){
            if(s[cookies]>=g[greed]) greed++;
            cookies++;
        }
        return greed;
    }
};

/* class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int child=0,cookie=0;
        while(child<g.size() && cookie< s.size()){
            if(s[cookie]>=g[child]){
                child++;
            }
            cookie++;
        }
        return child;
    }
}; */