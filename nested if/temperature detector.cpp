#include<iostream>
using namespace std;
int main() {
    int temperature;
    bool response;

    cout << "WHAT'S THE TEMPERATURE TODAY" << endl;
    cin >> temperature;

    if (temperature <= 30) {
        cout << "is it sunny?\n1--> yes and 0--> no" << endl;
        cin >> response;

        if (response == 1) {
            cout << "will go for beach" << endl;
        }
        
        if (response == 0) {
            cout << "will stay indoor" << endl;
        }

    return 0;
}
}

