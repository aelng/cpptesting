#include <iostream>
using namespace std;

class TestClass{
    public:
        void say() {
            cout << "from a class" << endl;
        }
};


int main()
{
    TestClass obj;
    obj.say();
    return 0;
}
