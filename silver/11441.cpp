//11441 합구하기
//silver3
//사용 알고리즘 누적합
//총평 : 구간합 알고리즘을 알면 매우 쉬운 문제 근데 ios::sync_with_stdio(false) cin.tie(0)을 안써서 틀린건 좀 변수였음

#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n, m, num, x, y;
    int s[100001]={0};
    cin >> n;
    cin >> num;
    s[1]=num;
    for(int i=2 ; i<=n ; i++){
        cin >> num;
        s[i]=s[i-1]+num;
    }
    
    cin >> m;
    for(int i=0 ; i<m ; i++){
        cin >> x >> y;
        cout << s[y]-s[x-1] << '\n';
    }
    
    
}
