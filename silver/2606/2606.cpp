//2606 바이러스
//silver 3
//사용 알고리즘 DFS(재귀함수)
//근데 스스로 못하겠어서 다른 코드보면서 이해함 https://from20180718.blogspot.com/2018/09/c-2606-dfs-bfs.html

#include <iostream>
using namespace std;
int board[101][101];
bool vis[101];
int cnt=0, com, n;

void dfs(int x){
    cnt++;
    vis[x]=1;
    for(int i=1 ; i<=com ; i++){
        if(board[x][i]==1&&!vis[i]) dfs(i);
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> com >> n;
    for(int i=0 ; i<n ; i++){
        int x,y;
        cin >> x >> y;
        board[x][y]=1;
        board[y][x]=1;
    }
    dfs(1);
    
    cout << cnt-1;
}

