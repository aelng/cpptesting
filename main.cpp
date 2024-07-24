#include <iostream>
using namespace std;

class TestClass{
//gettrs and setters
    public:
        void setName(string x) {
            name = x;
        }
        string getName() {
            return name;
        }
    private:
        string name;
        int jo;
};


int main()
{
    TestClass obj;
    obj.setName("jose");
    cout << obj.getName();
    return 0;
}
