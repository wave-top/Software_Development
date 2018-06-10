#include <iostream>
#include <string.h>
using namespace std;

class Student	/* declare base class */
{
	public:
		Student() {number = 1001; name = "bobo"; sex = 'M';}
		void get_value() {		/* Input the data members of base class */
			cout<<"input the number,name and sex(M or W):"<<endl;
			cin>>number>>name>>sex;
		}
		void display() {
			cout<<"Number:"<<number<<endl;
			cout<<"Name:"<<name<<endl;
			cout<<"Sex:"<<sex<<endl;
		}
	private:
		unsigned int number;
		string name;
		unsigned char sex;
};

class Student_example : private Student	/* Declare the derivation calss by private inheritance */
{
	public:
		Student_example() {age = 25; address = "Shanghai";}
		void get_value_example() {
			get_value();
			cout<<"Input the age and address of student:"<<endl;
			cin>>age>>address;
		}
		void display_example() {
			display();
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
