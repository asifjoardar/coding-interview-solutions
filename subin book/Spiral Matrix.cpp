//leetcode 54. Spiral Matrix

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& a) {
        int n,m,i,j;
        m=a[0].size();
        n=a.size();
        vector<int>ans;
        int vis[n][m];
        for(i=0;i<n;i++){
            for(j=0;j<m;j++)
                vis[i][j]=0;
        }
        int x=-1,x1;
        int y=0,y1;
        while(true){
            bool db=true;
            bool un=true;
            bool bd=true;
            bool nu=true;
            for(x=x+1;x<m;x++){
                if(!vis[y][x]){
                    ans.push_back(a[y][x]);
                    vis[y][x]=1;
                    db=false;
                    x1=x;
                }
            }
            x=x1;
            for(y=y+1;y<n;y++){
                if(!vis[y][x]){
                    ans.push_back(a[y][x]);
                    vis[y][x]=1;
                    un=false;
                    y1=y;
                }
            }
            y=y1;
            for(x=x-1;x>=0;x--){
                if(!vis[y][x]){
                    ans.push_back(a[y][x]);
                    vis[y][x]=1;
                    bd=false;
                    x1=x;
                }
            }
            x=x1;
            for(y=y-1;y>=0;y--){
                if(!vis[y][x]){
                    ans.push_back(a[y][x]);
                    vis[y][x]=1;
                    nu=false;
                    y1=y;
                }
            }
            y=y1;
            if(db or un or bd or nu)
                break;
        }
        
        return ans;
    }
};
