#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    string input;
    map<string, int> que;
    while (getline(cin, input) && input != "exit") {
        if (input != "Next")que[input]++;
        else if (que.empty())cout << "The queue is empty" << endl;
        else {
            cout << que.begin()->first << endl;
            if (--que.begin()->second == 0)que.erase(que.begin());
        }
    }
    return 0;
}
