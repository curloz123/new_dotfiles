#include <iostream>

using namespace std;

class student{
	protected:
		int roll_no;
		string name;
	public:
		void set_details(int roll , string nam);
		void get_details(void);
};

void student :: set_details(int roll , string nam){
	roll_no = roll;
	nam = name;
}

void student :: get_details(){
	cout<<"Name of student is "<<name<<endl;
	cout<<"Roll no of student is "<<roll_no<<endl;
}

class exam : public student{
	protected:
		float maths;
		float physics;
	public:
		void set_marks(float , float);
		void get_marks(void);
};

void exam :: set_marks(float math_marks , float physics_marks){
	maths=math_marks;
	physics=physics_marks;
}

void exam :: get_marks(){
	cout<<"Math marks : "<<maths<<endl;
	cout<<"Physics marks : "<<physics<<endl;
}

class result : public exam{ 
	public:
		void get_result(){
			get_details();
			get_marks();
			cout<<"Percentage is "<<(maths+physics)/2<<endl;
		}
};
int main(){
	result adi;
	adi.set_details(450,"Aditya");
	adi.set_marks(90.5 , 94.5);
	adi.get_result();
	return 0;
}
