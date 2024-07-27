#include <iostream>
#include "Create.h"

using namespace std;


int main()
{
    //When am I going to use this

    Create createObject;
    Create *pnt = &createObject;

    createObject.printStuff();
    pnt->printStuff();
}
