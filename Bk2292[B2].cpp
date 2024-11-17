#include<iostream>
//백준 2292번 [B2] https://www.acmicpc.net/problem/2292
int main(){
	int N,M=1,i=1;
	std::cin>>N;
	
	if (N>1){
		while(N>M){
			i++;
			M+=6*(i-1);
			
			}
		
		}
	
	std::cout<<i;
	
	return 0;
	}
