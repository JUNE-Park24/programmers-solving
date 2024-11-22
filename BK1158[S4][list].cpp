#include <iostream>
#include <list>
//백준 1158[S4] https://www.acmicpc.net/problem/1158
int main(){
	int n,k,st=0;	
	std::cin>>n>>k;
	
	std::list<int> people;		//둘러앉은 사람 리스트
	std::list<int> ylist;		//요세푸스 리스트
	for(int i=0;i<n;i++){
		people.push_back(i+1);
		}
	std::list<int>::iterator iter = people.begin();
		
	for(int j=0;j<n;j++){
		for(int i=1;i<k;i++){
			if (*iter==people.back()){
				iter=people.begin();}
			else {
            iter++;}
			}
		ylist.push_back(*iter);
        if (*iter==people.back()){
            st=1;
        }
        int sz=people.size();
        if (sz!=1){
		    iter=people.erase(iter);
            
            if (st==1){
                iter=people.begin();
                st=0;
                }
            }
		}
	
	std::cout<<"<";	
	int sz1=ylist.size();
	std::list<int>::iterator it = ylist.begin();
	for (int i=0;i<sz1;i++){
		std::cout<<*it;
        if (i!=(sz1-1)){
        std::cout<<", ";
        }
		it++;}
	std::cout<<">";
		
	return 0;
	}
