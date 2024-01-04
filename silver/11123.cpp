//11123 양 한마리...양 두마리...

//전반전으로 공식같은게 있어서 외워두면 할만한거 같음

#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

#define X first
#define Y second
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1}; //방향설정

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t, h,w, cnt;
    cin >> t;
    while(t--){
        cin >> h >> w;
        char board[101][101]={0};
        bool vis[101][101]={0};
        for(int i=0 ; i<h ; i++){
            for(int j=0 ; j<w ; j++){
                cin >> board[i][j];
            }
        }
        cnt=0;
        for(int i=0 ; i<h ; i++){
            for(int j=0 ; j<w ; j++){
                if(vis[i][j]||board[i][j]!='#') continue; //방문했거나 #이 아니면 넘기기
                cnt++;
                vis[i][j]=1;
                queue<pair<int,int>> q;
                q.push({i,j});
            
            
            while(!q.empty()){
                pair<int,int> c = q.front();
                q.pop();
                for(int dir=0 ; dir<4 ; dir++){
                    int nx=c.X+dx[dir];
                    int ny=c.Y+dy[dir];
                    if(nx<0||nx>=h||ny<0||ny>=w) continue;
                    if(vis[nx][ny]||board[nx][ny]!='#') continue;
                    
                    q.push({nx,ny});
                    vis[nx][ny]=1;
                }
            }
            }
        }
        cout << cnt <<'\n';
        
    }

    return 0;
}
