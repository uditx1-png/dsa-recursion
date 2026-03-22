/// You are given an m x n integer matrix grid​​​.

//A rhombus sum is the sum of the elements that form the border of a 
//regular rhombus shape in grid​​​. The rhombus must have the shape of a square 
//rotated 45 degrees with each of the corners centered in a grid cell. Below is an image
// of four valid rhombus shapes with the corresponding colored cells that should be 
//included in each rhombus sum


#include <iostream>
#include <vector>
#include <set>
using namespace std;

vector<int> getBiggestThree(vector<vector<int>>& grid) {
    int m = grid.size();
    int n = grid[0].size();

    set<int> sums;

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){

            // single cell rhombus
            sums.insert(grid[i][j]);

            for(int k = 1; i + 2*k < m && j-k >= 0 && j+k < n; k++){

                int sum = 0;

                // top -> right
                for(int t = 0; t < k; t++)
                    sum += grid[i+t][j+t];

                // right -> bottom
                for(int t = 0; t < k; t++)
                    sum += grid[i+k+t][j+k-t];

                // bottom -> left
                for(int t = 0; t < k; t++)
                    sum += grid[i+2*k-t][j-t];

                // left -> top
                for(int t = 0; t < k; t++)
                    sum += grid[i+k-t][j-k+t];

                sums.insert(sum);
            }
        }
    }

    vector<int> result;

    for(auto it = sums.rbegin(); it != sums.rend() && result.size() < 3; it++)
        result.push_back(*it);

    return result;
}

int main() {

    int m,n;
    cout<<"Enter rows and columns: ";
    cin>>m>>n;

    vector<vector<int>> grid(m, vector<int>(n));

    cout<<"Enter grid elements:\n";

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>grid[i][j];
        }
    }

    vector<int> ans = getBiggestThree(grid);

    cout<<"Largest 3 rhombus sums:\n";

    for(int x : ans)
        cout<<x<<" ";

}