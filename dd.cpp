#include<stack>
#include<iostream>
using namespace std;
stack<int> s;
int main()
 {
 	for(int i=0;i<10;i++)
 		s.push(i);
 		while(s.size())
	 {
	 	cout<<s.size()<<' '<<s.top()<<endl;
	 	s.pop();
		 }	
 	
 	
 	
 	
 	
 	return 0;
 }
