#include<iostream>
using namespace std;
class student{
	public:
	string name;
	int roll_no;
	int reg_no;
    string email;
	void input(){
		cout<<"enter the name:"<<endl;
		cin>>name;
			cout<<"enter the roll_no:"<<endl;
		cin>>roll_no;
			cout<<"enter the registration no:"<<endl;
		cin>>reg_no;
			cout<<"enter the email:"<<endl;
		cin>>email;
	}
};
int main(){
	student s1;
	s1.input();
	return 0;
	
}
