#include <iostream>
#include <err.h>
using namespace std;

int main (int argc, char *argv[])
{

    err(0, "%s", "Not sure");
    cout << "hello world" << endl;

    return(0);
}
