#include <iostream>
#include <math.h>
// 백준 1740 [S3] https://www.acmicpc.net/problem/1740
int main(){
long long int N;
std::cin>>N;
if (N==1){
    std::cout<<1;
    return 0;}

long long int i=0,ans,res;
while(true){
    i++;
    if (pow(2,i)<=N & N<pow(2,i+1)){
        ans=pow(3,i);
        res=N-pow(2,i);
        if (res==0){
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
    if (pow(2,i)<=res){
        res=res-pow(2,i);
        ans+=pow(3,i);
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
