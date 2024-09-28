#include<iostream>
#include<vector>
using namespace std;

int main() {

    vector <int> arr;
    arr.push_back(2);
    arr.insert(arr.begin(),4);
    for(vector<int>:: iterator it = arr.begin(); it != arr.end();it++) {
        cout << *it << endl;
    }


}