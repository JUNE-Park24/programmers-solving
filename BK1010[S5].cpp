#include <iostream>
// 백준 1010번 [S5] https://www.acmicpc.net/problem/1010
int main(){
	int n;
	std::cin>>n;
	int ind[2*n],a,b;
	for(int j=1;j<=n;j++){
		std::cin>>a>>b;
		ind[2*j-1]=a;
		ind[2*j]=b;
		}
	for(int j=1;j<=n;j++){
	int N=ind[2*j-1],M=ind[2*j];
	if(N==1){
		std::cout<<M<<std::endl;}
	else{
		int res=M;
		for (int i=1;i<N;i++){
			res=res*(M-i)/(i+1);
			}
		std::cout<<res<<std::endl;
		}
	}
	return 0;
	}
	
