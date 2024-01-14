//11728 배열 합치기
//silver5
//사용한 알고리즘:병합정렬
#include <iostream>
using namespace std;
int arr[1000001];
int brr[1000001];
int crr[2000001];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    for(int i=0 ; i<n ; i++){
        cin >> arr[i];
    }
    for(int i=0 ; i<m ; i++){
        cin >> brr[i];
    }
    int ax=0, bx=0;
    for(int i=0 ; i<n+m ; i++){
        if(ax==n) crr[i]=brr[bx++];
        else if(bx==m) crr[i]=arr[ax++];
        else if(arr[ax] <= brr[bx]) crr[i]=arr[ax++];
        else crr[i]=brr[bx++];
    }
    for(int i=0 ; i<n+m ; i++){
        cout << crr[i] <<' ';
    }
  
/* 
예시
2 2
3 5
2 9 

ax=0 bx=0 1차
arr[0]=3 brr[0]=2
c[0]=2 bx++

ax=0 bx=1 2차
arr[0]=3 brr[1]=9
c[1]=3 ax++

ax=1 bx=1 3차
arr[1]=5 brr[1]=9
c[2]=5 ax++

ax=2 bx=1 4차
arr[2]=0 brr[1]=9
ax==n
c[3]=9 bx++;

종료
*/

// 다른 풀이방식 좀 더 간단한 방식 약간 꼼수가 들어감
/*
#include <iostream>
#include <algorithm>
using namespace std;
int arr[2000000];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    for(int i=0 ; i<n+m ; i++){
        cin >> arr[i];
    }
    sort(arr,arr+n+m);
    for(int i=0 ; i<n+m ; i++){
        cout << arr[i] << " ";
    }
    
}
*/
}





