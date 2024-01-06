//2178 미로탐색
//사용 알고리즘 : BFS

#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
#define X first
#define Y second
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
char board[101][101];
int vis[101][101];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    for(int i=0 ; i<n ; i++){
        cin >> board[i];
    }
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            vis[i][j] = -1;
        }
    }
    queue<pair<int,int>> q;
    q.push({0,0});
    vis[0][0]=0;
    
    while(!q.empty()){
        pair<int,int> c = q.front(); q.pop();
        for(int dir=0 ; dir<4 ; dir++){
            int nx=c.X+dx[dir];
            int ny=c.Y+dy[dir];
            if(nx<0||nx>=n||ny<0||ny>=m) continue;
            if(vis[nx][ny] >= 0||board[nx][ny]!='1') continue;
            
            vis[nx][ny] = vis[c.X][c.Y]+1;
            q.push({nx,ny});
        }
    }
    cout << vis[n-1][m-1]+1;

    return 0;
}
