#include <iostream>
#include <vector>
using namespace std;

void solve(vector<vector<int>>& maze, int n, int x, int y,
           string path, vector<string>& ans,
           vector<vector<bool>>& visited) {

    // destination reached
    if(x == n-1 && y == n-1){
        ans.push_back(path);
        return;
    }

    visited[x][y] = true;

    // Down
    if(x+1<n && maze[x+1][y]==1 && !visited[x+1][y])
        solve(maze,n,x+1,y,path+'D',ans,visited);

    // Left
    if(y-1>=0 && maze[x][y-1]==1 && !visited[x][y-1])
        solve(maze,n,x,y-1,path+'L',ans,visited);

    // Right
    if(y+1<n && maze[x][y+1]==1 && !visited[x][y+1])
        solve(maze,n,x,y+1,path+'R',ans,visited);

    // Up
    if(x-1>=0 && maze[x-1][y]==1 && !visited[x-1][y])
        solve(maze,n,x-1,y,path+'U',ans,visited);

    visited[x][y] = false;
}

int main(){

    int n = 4;

    vector<vector<int>> maze =
    {
        {1,0,0,0},
        {1,1,0,1},
        {1,1,0,0},
        {0,1,1,1}
    };

    vector<string> ans;

    vector<vector<bool>> visited(n, vector<bool>(n,false));

    if(maze[0][0] == 1)
        solve(maze,n,0,0,"",ans,visited);

    cout<<"Paths are:\n";

    for(string s : ans)
        cout<<s<<endl;
}