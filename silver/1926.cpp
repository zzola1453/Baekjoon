//1926 그림

//바킹독 BFS코드를 바탕으로 만듬
//거의 다 보면서 이해해서 내가 짠게 아님.. 그래도 한 번 직접 적어보면서 이해하기
//https://blog.encrypted.gg/941
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
#define X first
#define Y second

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n, m, mx=0, cnt=0, size;
  int pic[500][500];
  bool vis[500][500];
  int dx[4]={1,0,-1,0};
  int dy[4]={0,1,0,-1};
  
  
  cin >> n >>  m;
  for(int i=0 ; i<n ; i++){
    for(int j=0 ; j<m ; j++) {
      cin >> pic[i][j];
    }
  }

  for(int i=0 ; i<n ; i++){
    for(int j=0 ; j<m ; j++) {
      if(vis[i][j]||pic[i][j]!=1) continue;
      cnt++;
      queue<pair<int,int>> q;
      vis[i][j]=1;
      q.push({i,j});
      size=0;
      while(!q.empty()){
        size++;
        pair<int,int> c = q.front(); q.pop();
        for(int dir=0 ; dir<4 ; dir++){
          int nx=c.X+dx[dir];
          int ny=c.Y+dy[dir];
          if(nx<0||nx>=n||ny<0||ny>=m) continue;
          if(vis[nx][ny]||pic[nx][ny]!=1) continue;
          q.push({nx,ny});
          vis[nx][ny]=1;
        }
      }
      mx=max(mx,size);
  }
}
  cout << cnt << '\n' << mx;
}
