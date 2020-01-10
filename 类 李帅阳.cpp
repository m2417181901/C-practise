#include<string>
#include<iostream>
using namespace std;
class student
{
public:
	student(string num="20171001025",string nam="luyingying",string spe="math",char s='f');
	friend ostream &operator<<(ostream &,const student &);
private:
    string num;
	string name;
	string specality;
	char sex;
};
student::student(string num,string nam,string spe,char s)
{
	num=num;
	name=nam;
	specality=spe;
	sex=s;
}
ostream &operator<<(ostream &out,const student &stud)
{
	cout<<stud.num<<' '<<stud.name<<' '<<stud.specality<<' '<<stud.sex<<endl;
}
int main()
{
	student stud;
	cout<<stud;
	return 0;
}

