#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int N, M, a; //����ī�� ����, �Է¼���,  
	int cnt1[10000001]={}; //��� ����ī�� � ������ �ִ��� 
	int cnt2[10000001]={}; //���� ����ī�� � ������ �ִ���
	int zero = 0; //0ó��  
	
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
