//1·Î ¸¸µé±â 1463¹ø  

#include <iostream>
using namespace std;

int m[1000000];

int cal(int x){
	if(m[x]!=0 || x==1){
		return m[x];
	}
	
	if(x%3==0 && x%2==0){
		m[x]=min(1+cal(x/2), 1+cal(x/3));
		return m[x]; 
	}
	else if(x%3==0){
		m[x]=min(1+cal(x/3), 1+cal(x-1));
		return m[x]; 
	}
	else if(x%2==0){
		m[x]=min(1+cal(x/2), 1+cal(x-1));
		return m[x];
	}
	else{
		m[x]=1+cal(x-1);
		return m[x];
	}
}

int min(int a, int b){
	return a > b ? b : a;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int N;
	m[2]=m[3]=1;
	cin >> N;
	cout << cal(N);
	
}
