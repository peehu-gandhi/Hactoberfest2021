#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
   vector<int> result;
   stringstream ss;
    ss << str;
    int temp;
    char ch;
    while(ss >> temp) {
        result.push_back(temp);
        ss >> ch;
    }
   return result;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
