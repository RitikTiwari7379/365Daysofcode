#include <iostream>
using namespace std;
#include <bits/stdc++.h> 
bool  isSafe(int newx, int newy, vector < vector < int >> & arr, int n, vector < vector < bool >> & vis ){
    if((newx>=0 && newx<n) && (newy>=0 && newy<n) && vis[newx][newy]!=1 && arr[newx][newy]==1 ){
        return true;
    }
    else {
        return false;
    }
}

void Solve(int x, int y, vector < vector < int >> & arr, int n,  vector<string>& ans, vector < vector < bool >> & vis, string path  ){
    // Base Case
    if(x == n-1 && y == n-1){
        ans.push_back(path);
        return;
    }
    vis[x][y] =1;
    // Down
    if(isSafe(x+1, y , arr, n , vis)){
          Solve(x+1, y , arr, n , ans,vis, path + 'D');
    }

    // Left
    if(isSafe(x, y-1, arr,n,vis)){
        Solve(x, y-1 , arr, n , ans,vis, path + 'L');

    }

    // Right
     if(isSafe(x,y+1,arr,n,vis)){
        Solve(x, y+1 , arr, n , ans,vis, path + 'R');

    }

    // Up
    if(isSafe(x-1,y,arr,n,vis)){
        Solve(x-1, y , arr, n , ans,vis, path + 'U');

    }
    vis[x][y] = 0;
}
vector < string > searchMaze(vector < vector < int >> & arr, int n) {
    vector<vector<bool>>visited(n,vector<bool>(n,false));
    vector<string> ans;
    string path = "";
    if (arr[0][0] == 0) {
        return ans;
    }
    Solve( 0, 0 , arr, n, ans, visited, path);
    return ans;
}