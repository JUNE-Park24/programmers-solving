#include <iostream>
// 백준 10810번 문제 https://www.acmicpc.net/problem/10810

int main(){
    int N,M;
    int i,j,k,r,kk,ir;
    std::cin>>N>>M;

    int ball[N];

    for(kk=0;kk<N;kk++){
        ball[kk]=0;
    }

    for (ir=0; ir < M ; ir++){
        std::cin>>i>>j>>k;
        for (r=i;r<j+1;r++){
            ball[r-1]=k;
        }

    }

    for(kk=0;kk<N;kk++){
        std::cout<<ball[kk]<<" ";
    }
    return 0;
}
