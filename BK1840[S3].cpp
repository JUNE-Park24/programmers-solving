#include <iostream>
#include <math.h>
// 백준 1740 [S3] https://www.acmicpc.net/problem/1740
long long int powe(int x,int y){
    long long int ans=1;
    if (y==0){
        return ans;
    }
    else{
    for(int i=0;i<y;i++){
        ans=ans*x;
    }
    return ans;
    }
}

int main(void){
long long int N;
std::cin>>N;
if (N==1){
    std::cout<<1;
    return 0;}

long long int i=0,ans,res;
while(true){
    i++;
    if (powe(2,i)<=N & N<powe(2,i+1)){
        ans=powe(3,i);
        res=N-powe(2,i);
        if (res==0){
        std::cout<<ans;
        return 0;}
        break;
    }
}
i--;
if (res==1){
    ans+=1;
}
else{
while (i>0){
    if (powe(2,i)<=res){
        res=res-powe(2,i);
        ans+=powe(3,i);
    if (res==0){
        break;
    }
    else if (res==1){
        ans+=1;
        break;
    }
    }
    i--;
}}

std::cout<<ans;

return 0;
}
