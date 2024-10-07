#include <iostream>
#include <limits>

using namespace std;

int main(){
    int input;
    bool accepted = false;
    int array[10] = {1,9,3,7,5,6,4,8,2,10};

    cout << "Enter a number to search for: ";
    cin >> input;

    for(int i = 0; i < 10; i++){
        cout << "\nChecking element " << i << "...";
        if(array[i] == input){
            accepted = true;
            cout << "\nThe number " << input << " is at element " << i << "!";
            return i;
        }
    }

    cout << "Could not find the number " << input << ".";
    return -1;
}
