#include<iostream>
using namespace std;
class test{
	public:
		test();
		~test(){ };
	private:
		int i;
};
test::test(){
	i = 25;
	for(int j=0;j<10;j++)
	{
		cout<<"Counting at"<<j<<endl;
	}
}
test anObject;
int main()
{
	return 0;
}
