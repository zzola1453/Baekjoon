//2667 단자번호붙이기
//silver1
//사용 알고리즘 : BFS

#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
#define X first
#define Y second
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};

int main() {
    int n, cnt=0, size, res[100]={0}, o=0; //cnt=개수, size=각 건물의 크기, res=건물크기 저장하는 곳
    char board[101][101]={0};
    bool vis[101][101]={0};
    cin >> n;
    for(int i=0 ; i<n ; i++){
        cin >> board[i];
    }
    
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            if(vis[i][j]||board[i][j]!='1') continue;
            cnt++;
            vis[i][j]=1;
            queue<pair<int,int>> q;
            q.push({i,j});
            size=0;
            while(!q.empty()){
                size++;
                pair<int,int> c = q.front(); q.pop(); 
                for(int dir=0 ; dir<4 ; dir++){
                    int nx=c.X+dx[dir];
                    int ny=c.Y+dy[dir];
                    if(nx<0||nx>=n||ny<0||ny>=n) continue;
                    if(vis[nx][ny]||board[nx][ny]!='1') continue;
                    vis[nx][ny]=1;
                    q.push({nx,ny});
                }
            }
            res[o]=size; //건물크기 저장 res[0]=size
            o++; //iterator o=0 -> o=1
        }
    }
    cout << cnt << '\n';
    sort(res,res+o);
    for(int i=0 ; i<o ; i++){
        cout << res[i] << '\n';
    }
}
