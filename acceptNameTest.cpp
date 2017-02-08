#include "Accept.h"
using namespace std;

int main(){

    char c = 'a';
    bool accept = acceptName();

    if(accept) cout << "ACCEPT" << endl;
    else cout << "REJECT" << endl;

    return 0;
}
