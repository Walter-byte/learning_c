#include <iostream>
using namespace std;


int main() {

    int x[]={12, 24, 2, 54, 87};
    int *px=x;
    for(int i=0; i<5; i++)
        cout << *(x+i) << endl;


/*
NOTE:       x[i] = 85       and
            *(x+i) = 85
                            are the same.
*/
    
    
    for(int i=0; i<5; i++)
        cout << px[i] << endl;
}