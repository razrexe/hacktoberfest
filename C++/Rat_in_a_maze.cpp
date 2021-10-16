//author: anomic30
#include <iostream>
#include <vector>
using namespace std;

bool vis[100][100];

bool go(vector<vector<int>> &maze, int sx, int sy, int dx, int dy, int r, int c){
    //check for the boundary cases, check for blockage, check for already visited
    if(sx<0 || sy<0 || sx>=r || sy>=c || maze[sx][sy]==0 || vis[sx][sy]==true){
        return false;
    }
    //If we reach the destination then
    if(sx==dx && sy==dy){
        return true;
    }
    vis[sx][sy] = true; //mark it as visited

    //check for right direction
    if(go(maze,sx, sy+1, dx, dy, r, c)){
        return true;
    }
    //check for left direction
    if(go(maze,sx, sy-1, dx, dy, r, c )){
        return true;
    }
    //check for up direction
    if(go(maze, sx-1, sy, dx, dy, r,c)){
        return true;
    }
    //check for down direction
    if(go(maze, sx+1, sy, dx, dy, r, c)){
        return true;
    }
    return false;
}

int main(){
    vector<vector<int>> maze = {{ 1, 0, 0, 0 },
                                { 1, 1, 0, 1 },
                                { 0, 1, 0, 0 },
                                { 1, 1, 1, 1 }};
    int sx = 0;
    int sy = 0;
    int r = 4;
    int c = 4;
    int dx = r-1;
    int dy = c-1;

    memset(vis, false, sizeof(vis));
    //check if rat can react the destination!
    cout << boolalpha << go(maze, sx, sy, dx, dy, r, c) << endl;
    return 0;
}