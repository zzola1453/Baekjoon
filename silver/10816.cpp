#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int N, M, a; //숫자카드 개수, 입력숫자,  
	int cnt1[10000001]={}; //양수 숫자카드 몇개 가지고 있는지 
	int cnt2[10000001]={}; //음수 숫자카드 몇개 가지고 있는지
	int zero = 0; //0처리  
	
	cin >> N;
	for(int i=0 ; i<N ; i++){
		cin >> a;
		if(a > 0){
			cnt1[a]++;
		}
		else if(a < 0){
			a *= -1;
			cnt2[a]++;
		}
		else if(a==0){
			zero++;
		}
	} 
	cin >> M;
	for(int i=0 ; i<M ; i++){
		cin >> a;
		if(a > 0){
			cout << cnt1[a] << " ";
		}
		else if(a < 0){
			a *= -1;
			cout << cnt2[a] << " ";
		}
		else{
			cout << zero << " ";
		}
	} 
}
