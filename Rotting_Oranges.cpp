#include<bits/stdc++.h>
using namespace std;


class Solution 
{
    public:
    //Function to find minimum time required to rot all oranges. 
    int orangesRotting(vector<vector<int>>& grid) 
    {
        queue<pair<int,int>>q;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==2)
                {
                    q.push({i,j});
                }
            }
        }
        int c=0;
       // int c=-1,d=-1;
        q.push({-1,-1});
       int p=grid.size();
        int qr=grid[0].size();
        while(!q.empty())
        {
            int n=q.size();
            bool flag=false;
            while(q.front().first!=-1 && q.front().second!=-1)
            {
                int x=q.front().first;
                int y=q.front().second;
                if(x+1<p  && grid[x+1][y]==1)
                {
                    grid[x+1][y]=2;
                     q.push({x+1,y});
                     flag=true;
                }
                
                if(y+1<qr && grid[x][y+1]==1)
                {
                         grid[x][y+1]=2;
                          q.push({x,y+1});
                          flag=true;
                }
                
                if(y-1>=0 && grid[x][y-1]==1)
                {
                         grid[x][y-1]=2;
                          q.push({x,y-1});
                          flag=true;
                }
                
                if(x-1>=0 && grid[x-1][y]==1)
                {
                         grid[x-1][y]=2;
                          q.push({x-1,y});
                          flag=true;
                }
                
                q.pop();
               
                
            }
            q.pop();
            if(!q.empty())
            {
                q.push({-1,-1});
            }
            if(flag)
             c++;
        }
         for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==1)
                {
                    return -1;
                }
            }
        }
        return c;
        
    }
};


int main(){
	
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.orangesRotting(grid);
		cout << ans << "\n";
	
	return 0;
}  
