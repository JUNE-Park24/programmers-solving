#include <iostream>
//백준 1149[S4] https://www.acmicpc.net/problem/1049
int main(){
    int N,M,x,y,res,tar;
    int min[2];
    std::cin>>N>>M;
    res=N%6;
    tar=(N-res)/6;
    for(int i=0;i<M;i++){
        std::cin>>x>>y;
        if(i==0){min[0]=x;min[1]=y;}
        if (min[0]>x){min[0]=x;}
        if (min[1]>y){min[1]=y;}
    }
    if (min[1]*6<min[0]){               //낱개 구매가  6개 구매보다 저렴할 때
        std::cout<<min[1]*N;            //낱개로 전부 구매
    }
    else{ //세트구매가 저렴할 때
        if (min[1]*res<min[0]){
        std::cout<<min[0]*tar+min[1]*res;
        }
        else{
            std::cout<<min[0]*(tar+1);
        }
    }

    

    return 0;
}
