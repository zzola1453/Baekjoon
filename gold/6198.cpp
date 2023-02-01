#include <stdio.h>
#include <stack>
using namespace std;

int main(){
	stack<int> s;
	int N, h[80001];
	long long int cnt=0;
	
	scanf("%d",&N);
	for(int i=0 ; i<N ; i++){
		scanf("%d",&h[i]);
	}
	
	for(int i=0 ; i<N ; i++){
		while(!s.empty()){
			if(s.top()<=h[i]){
				s.pop();	
			}
			else{
				break;
			}
		}
		s.push(h[i]);
		cnt+=s.size()-1;
	}
	printf("%lld",cnt);
	
}
