#include <iostream>
// https://www.acmicpc.net/problem/2609
int main(){
    int N,M,tmp;
    std::cin>>N>>M;
    if (N>M){   //항상 M이 더 크도록 조정
        tmp=M;
        M=N;
        N=tmp;
    }

    if (M%N==0){
        std::cout<<N<<std::endl<<M;
        return 0;
    }
    int maxcop=1;
    for (int i=2;i<N;i++){
        if (N%i==0 && M%i==0){
            maxcop=i;
        }
    }
    std::cout<<maxcop<<std::endl;
    int mincop=M*N/maxcop;
    std::cout<<mincop;
    return 0;
}
