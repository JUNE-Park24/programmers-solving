#include <iostream>
// 백준 1312[S5] https://www.acmicpc.net/problem/1312
int main(){
	int A,B,N;
	std::cin>>A>>B>>N;
	int res1,res2,cm;
	
	res1=A%B;
	cm=(A-res1)/B;
	
	for(int i=0;i<N;i++){
		res2=(10*res1)%B;
		cm=(10*res1-res2)/B;
		res1=res2;
		}
	std::cout<<cm;
		
	return 0;
	}


