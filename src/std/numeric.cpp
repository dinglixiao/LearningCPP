#include <iostream>
#include <numeric>
#include <thread>
#include <algorithm>
#include <vector>

using namespace std;


int main() {

    auto f = [] {
        return 1;
    };

    cout << f() << endl;
}
