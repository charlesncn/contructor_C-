#include <iostream>
using namespace std;
class Dog{
	int age;
	double weight;
	string name;
	public:
		Dog(int x, double y, string z){
			age=x;
			weight=y;
			name=z;
		}
		void disp(){
			cout<<"Name "<<name<<"\nAge = "<<age<<"years\n"<<"Weight = "<<weight<<"lb\n"<<endl;
		}
};
int main(int argc, char *argv[])
{
	Dog obj(3, 6, "Noppe");
	obj.disp();
	return 0;
}
