#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int, int> pii;
typedef array<int, 2> ar;
typedef array<int, 3> arr;

// UTILS
int rand(int a, int b) {
    return a + rand()%(b - a + 1);
}

vector<int> generateUniquePermutation(int n) {
    vector<int> res;
    set<int> visited;
    while ((int)res.size() < n) {
        int val = rand(1, n);
        if (visited.find(val) == visited.end()) {
            res.push_back(val);
        }
    }
    return res;
}

vector<int> generateUniqueVector(int n, int lo, int hi) {
    vector<int> res;
    set<int> visited;
    while ((int)res.size() < n) {
        int val = rand(lo, hi);
        if (visited.find(val) == visited.end()) {
            res.push_back(val);
        }
    }
    return res;
}

string generateBinaryString(int n) {
    string res;
    for (int x:generateUniqueVector(n, 0, 1)) {
        res.push_back(x + '0');
    }
    return res;
}

// MAIN
signed main(int argc, char* argv[]) {
    srand(atoi(argv[1]));
    /*****************************/
    
    /*****************************/
}