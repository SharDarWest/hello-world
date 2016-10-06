#include <iostream>
#include <err.h>
using namespace std;


void loopy(int times) {

    for (int i=1; i<times; ++i) {
        cout << "Looping, looping, looping." << endl;
    }
}


int main (int argc, char *argv[])
{

    cout << "Hello world!" << endl;
    loopy(11);
    cout << "All Done!" << endl;

    return(0);
}
