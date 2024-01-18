//6198 옥상정원꾸미기
//gold5
//사용 자료구조:stack
//총평 : 내 생각보다 stack으로 많은 상상을 해야한다는 것을 알게 되었음 stack의 활용을 많이 하면서 좀 더 익혀야겠다고 반성이 된다.
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
