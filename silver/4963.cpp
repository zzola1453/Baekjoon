//4963 섬의 개수
//사용한 알고리즘 : BFS
//똑같이 개수 세는 문젠데 거기에 대각선이 추가된 문제였음

#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

#define X first
#define Y second
int dx[8]={1,0,-1,0,1,-1,1,-1};
int dy[8]={0,1,0,-1,1,-1,-1,1}; //대각선까지 고려해주기

int main(){
    ios::sync_with_stdio(false);
    int w, h, cnt;
    cin >> w >> h;
    while(w!=0||h!=0){
        int board[51][51]={0};
        bool vis[51][51]={0};
        cnt=0;
        
        for(int i=0 ; i<h ; i++){
            for(int j=0 ; j<w ; j++){
                cin >> board[i][j];
            }
        }
        
        
        for(int i=0 ; i<h ; i++){
            for(int j=0 ; j<w ; j++){
                if(vis[i][j]||board[i][j]!=1) continue;
                cnt++;
                queue<pair<int,int>> q;
                vis[i][j]=1;
                q.push({i,j});
                
                while(!q.empty()){
                    pair<int,int> c = q.front(); q.pop();
                    for(int dir=0 ; dir<8 ; dir++){
                        int nx=c.X+dx[dir];
                        int ny=c.Y+dy[dir];
                        if(nx<0||nx>=h||ny<0||ny>=w) continue;
                        if(vis[nx][ny]||board[nx][ny]!=1) continue;
                        vis[nx][ny]=1;
                        q.push({nx,ny});
                    }
                    
                }
            }
        }
        cout << cnt << '\n';
        
        cin >> w >> h;
    }  
    
}
