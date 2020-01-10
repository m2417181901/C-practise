#include<iostream>
#include<string>
using namespace std;
int i = 15;
void money(int &sum,int num){
	if(num==5)
		{
			sum++;
			return;	
		}
	if(num>5)
		return;	
	money(sum,num+1);
	money(sum,num+2);
	money(sum,num+5);
}
class Location{
	public:
		Location(){
		}
		Location(int m,int n){
			X = 2*m;
			Y = 2*n;
		}
		~Location();
		void Init(int initX,int initY){
			X = initX;
			Y = initY;
		}
		int getx(){
			return X;
		}
		int gety(){
			return Y;
		}
	private:
		int X,Y;
};
Location::~Location(){
	cout<<this->getx()<<"Destructor called!"<<endl;
}
class Score{
	public:
		Score(float c=0,float b=0,float a=0);
		void show();
	private:
		float computer;
		float english;
		float math;
		float sum;	
};
Score::Score(float c,float b,float d){
	computer = c;
	english = b;
	math = d;
	sum = c + b + d;
}
void Score::show(){
	cout<<"\n计算机成绩:"<<computer;
	cout<<"\n英语成绩:"<<english;
	cout<<"\n数学成绩:"<<math;
	cout<<"\n总成绩:"<<sum;
}
class Student{
	private:
		string name;
		string stu_no;
		Score score1;
	public:
		Student(string a,string b,float c,float d,float e);
		~Student();
		void show();	
};
Student::Student(string a,string b,float c,float d,float e):score1(c,d,e)
{
	name = a;
	stu_no = b;
}
Student::~Student(){
//	delete []name;
//	delete []stu_no;
}
void Student::show(){
	cout<<"\n 姓名:"<<name;
	cout<<"\n 学号:"<<stu_no;
	score1.show();
}
int main()
{
	Location A(785,980);
	Location B(A);	
	cout<<B.getx()<<' '<<B.gety()<<endl;
//	Student student("马泽伟","2016984130509",150,100,150);
//	student.show();
}
