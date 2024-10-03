#include <iostream>
#include <map>
#include <string>
using namespace std;

struct player_details {
    double cur_sum ;
    double cur_cnt ;

    void insert(int score) {
        cur_sum += score;
        cur_cnt++;
    }

    double get_sum() {
        return cur_sum;
    }

    double get_mean() {
        return (cur_cnt > 0) ? (cur_sum / cur_cnt) : 0.0;
    }

    map<string, double> get_details() {
        map<string, double> details;
        details["mean"] = get_mean();
        details["sum"] = get_sum();
        return details;
    }
};

struct dashboard {
    map<string, player_details> mp;

    void ingest(string player, int score) {
        mp[player].insert(score);
    }

    map<string, double> getdetails(string player) {
        return mp[player].get_details();
    }
};

int main() {
    dashboard mydash;
    mydash.ingest("Virat", 100);
    mydash.ingest("Rohit", 89);
    mydash.ingest("Virat", 9);

    auto data = mydash.getdetails("Virat");
    for(auto v:data) {
        cout << v.first << " " << v.second<< endl;
    }

    return 0;
}
