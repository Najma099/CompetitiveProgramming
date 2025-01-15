#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
typedef long long ll;

// to get median
struct bag{

    multiset<int> small;
    multiset<int> large;

    void insert(int x) {

        if(small.empty() || x <= *prev(small.end())) {
            small.insert(x);
        }
        else 
            large.insert(x);

        balance();
    }

    void balance() {
        if(small.size() > large.size() + 1) {
            auto it = prev(small.end());
            large.insert(*it);
            small.erase(it);
        }
        else if(large.size() > small.size()) {
            auto it = large.begin();
            small.insert(*it);
            large.erase(it);
        }
    }

    void remove(int x) {
        if(small.find(x) != small.end()) {
            small.erase(small.find(x));
            balance();
        }
        else if(large.find(x) != large.end()) {
            large.erase(large.find(x));
            balance();
        }
    }

    int get_median () {
        int a = small.size() + large.size();
        if(a % 2 == 0) {
            return (*prev(small.end()) + *large.begin()) / 2;
        }
        else {
            return *small.rbegin();
        }
    }


};