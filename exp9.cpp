#include <iostream>
using namespace std;

class  ParentClass{
    int a;
    public:
        ParentClass(){
            a = 10;
        }
        void show_a(){
            cout<< endl << "Inside the ParentClass show_a method!" << endl;
            cout<< "value of a is " << a << endl;
        }

};

class  ChildClass_1:public ParentClass{
    int b;
    public:
        ChildClass_1(){
            b = 100;
        }
        void show_b(){
            cout<< endl << "Inside the ChildClass_1 show_b method!" << endl;
            cout<< "value of b is " << b << endl;
        }

};

class  ChildClass_2:public ChildClass_1{
    int c;
    public:
        ChildClass_2(){
            c = 1000;
        }
        void show_c(){
            cout<< endl << "Inside the ChildClass_2 show_c method!" << endl;
            cout<< "value of c is" << c << endl;
        }

};

int main()
{
    ChildClass_2 obj;

    obj.show_a();
    obj.show_b();
    obj.show_c();

    return 0;
}


