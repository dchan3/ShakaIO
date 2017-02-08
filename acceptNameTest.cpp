#include "Accept.h"
using namespace std;

int main(){

    char c = 'a';
    bool accept = acceptName(c);
    if(accept) cout << "ACEPT" << endl;
    else cout << "REJECT" << endl;

    return 0;
}
