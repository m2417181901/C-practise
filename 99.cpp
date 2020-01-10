#include<iostream>
#include<string>
using namespace std;
int main(){
	string *str_test = new string[1]();
	str_test[0] = "";
	int a = ('G'-'A');
	cout<<a<<endl;
	int b = 9;
	str_test[0] = ('0'+ b);
	cout<<&str_test[0][0]<<endl;
	
	
	
	
	return 0;
}
