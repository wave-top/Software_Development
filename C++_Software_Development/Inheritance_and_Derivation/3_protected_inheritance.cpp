#include <iostream>
#include <string.h>
using namespace std;

class Student	/* declare base class */
{
	public:
		 Student() {number = 1001; name = "bobo"; sex = 'M';}
	protected:
		unsigned int number;
		string name;
		unsigned char sex;
};

class Student_example : protected Student	/* Declare the derivation calss by protected inheritance */
{
	public:
		Student_example() {age = 25; address = "Shanghai";}
		void get_value_example() {
			cout<<"input the number,name and sex(M or W):"<<endl;
			cin>>number>>name>>sex;
			cout<<"Input the age and address of student:"<<endl;
			cin>>age>>address;
		}
		void display_example() {
			cout<<"Number:"<<number<<endl;
			cout<<"Name:"<<name<<endl;
			cout<<"Sex:"<<sex<<endl;
			cout<<"Age:"<<age<<endl;
			cout<<"Address:"<<address<<endl;
		}
	private:
		unsigned short age;
		string address;
};

int main()
{
	Student_example student;
	student.get_value_example();
	student.display_example();

	return 0;
}
