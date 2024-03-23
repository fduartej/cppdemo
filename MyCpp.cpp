#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> msg = {"Hello", "World","Italo","Ahora","Aprendes","C++","con VSCode"};
    for(const string word : msg){
        cout << word << endl;
    }
    cout << endl;
    return 0;
}