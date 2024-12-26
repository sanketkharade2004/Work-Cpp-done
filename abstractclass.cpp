#include<iostream>                    
using namespace std;

class Car
{
	public:
	void start()      // This is a Concrete Function, which is present in base class
	{
		cout<<"Car Started"<<endl;
	}
	virtual void move()                // OR virtual void start()=0; this is known as pure Virtual Functions 
	{
		cout<<"Car Moved"<<endl;   
	}

};
class Innova : public Car
{
   public:
   	void start()
	{
		cout<<"Innova Started"<<endl;
	}
   	void move()
   	{
   		cout<<"Innova Moved"<<endl;
    }
};

int main()                    
{    
    Car *p=new Innova();
	p->start();            // it is not given virtual in base class therefore "Car Started" will get print
	p->move();
 
}
