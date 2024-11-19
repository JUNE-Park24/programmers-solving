#include <iostream>
//백준 1193[s5] https://www.acmicpc.net/problem/1193
int main(){
	int x,n=1,i=1,num,den;
	std::cin>>x;
	if (x==1){
		std::cout<<1<<"/"<<1;
		}
	else{
		while(n<x){
			i++;
			n=i*(i+1)/2;
			}			
			num=x-(i-1)*i/2;
			den=i+1-num;
			if (i%2==1){
				std::cout<<den<<"/"<<num;
				}
			else{
				std::cout<<num<<"/"<<den;
				}
	}

	return 0;
	}
