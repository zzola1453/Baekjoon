//2075 N번째 큰 수
//silver 2
//sort를 이용해서 매우매우매우매우 편하게 풀 수 있었음
#include <iostream>
#include <algorithm>
using namespace std;
int board[2250001];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    
    for(int i=0 ; i<n*n ; i++){
        cin >> board[i];
    }
    sort(board,board+(n*n));
    cout << board[(n*n)-n];
    
}
