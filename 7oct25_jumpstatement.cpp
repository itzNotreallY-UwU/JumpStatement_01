//Programmer: Irfan Aiman Bin Zuraidi| Jump statement 1.0
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++){
        if (i==5){
            cout<<"Number 5 found! Stopping the loop."<< endl;
            break;
        }
        cout<<"Current number:"<< i << endl;
    }
    cout<<"Loop ended."<< endl;
    return 0;
}
