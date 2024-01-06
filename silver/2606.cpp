//2606 바이러스
//silver 3
//사용 알고리즘 DFS(재귀함수) 어지저찌 이해는 했습니다.
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
재귀함수 진행방식

/*
bfs(1)
cnt++ //1
vis[1]=1;
board[1][1]==1&&!vis[1]; continue; //둘 다 성립 X
board[1][2]==1&&!vis[2]; dfs(2)

dfs(2)
cnt++ //2
vis[2]=1;
board[2][1]==1&&!vis[1] continue; //vis[1]가 1이므로 조건성립 X
board[2][2]==1&&!vis[2] continue; //vis[2]가 1이므로 조건성립 X
board[2][3]==1&&!vis[3] dfs(3)

dfs(3)
cnt++ //3
vis[3]=1;
board[3][1]==1&&!vis[1] continue; //둘 다 성립 X
board[3][2]==1&&!vis[2] continue; //vis[2]가 1이므로 조건성립 X
board[3][3]==1&&!vis[3] continue; //둘 다 성립 X
board[3][4]==1&&!vis[4] continue; //둘 다 성립 X
board[3][5]==1&&!vis[5] continue; //둘 다 성립 X
board[3][6]==1&&!vis[6] continue; //둘 다 성립 X
board[3][7]==1&&!vis[7] continue; //둘 다 성립 X -> 다시 dfs(2)로 돌아감

dfs(2)
board[2][4]==1&&!vis[4] continue; //둘 다 성립 X
board[2][5]==1&&!vis[5] dfs(5) 

dfs(5)
cnt++ //4
vis[5]=1;
board[5][1]==1&&!vis[1] continue; //둘 다 성립 X
board[5][2]==1&&!vis[2] continue; //vis[2]가 1이므로 조건성립 X
board[5][3]==1&&!vis[3] continue; //둘 다 성립 X
board[5][4]==1&&!vis[4] continue; //둘 다 성립 X
board[5][5]==1&&!vis[5] continue; //둘 다 성립 X
board[5][6]==1&&!vis[6] continue; dfs(6)

dfs(6)
cnt++ //5
vis[6]=1;
board[6][1]==1&&vis[1] continue; //둘 다 성립 X
board[6][2]==1&&vis[2] continue; //둘 다 성립 X
board[6][3]==1&&vis[3] continue; //둘 다 성립 X
board[6][4]==1&&vis[4] continue; //둘 다 성립 X
board[6][5]==1&&vis[5] continue; vis[5]가 1이므로 조건성립 X
board[6][6]==1&&vis[6] continue; //둘 다 성립 X
board[6][7]==1&&vis[7] continue; //둘 다 성립 X -> 다시 dfs(2)로 돌아감

dfs(2)
board[2][6]==1&&!vis[6] continue; //둘 다 성립 X
board[2][7]==1&&!vis[7] continue; //둘 다 성립 X -> dfs(1)로 돌아감

dfs(1)
board[1][3]==1&&!vis[3]; continue; //둘 다 성립 X
board[1][4]==1&&!vis[4]; continue; //둘 다 성립 X
board[1][5]==1&&!vis[5]; continue; //vis[5]가 1이므로 조건성립 X
board[1][6]==1&&!vis[6]; continue; //둘 다 성립 X
board[1][7]==1&&!vis[7]; continue; //둘 다 성립 X

결론 : cnt=5가 된다. 근데 여기서 3에서는 새로 전염된 컴퓨터가 없기 때문에 -1해서 cnt==4가 된다.
*/
