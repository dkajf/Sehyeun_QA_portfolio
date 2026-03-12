#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    int N, M;
    vector<int> A;

    cin >> N;

    for(int i;i<N;i++){
        int x;
        cin >> x;
        A.push_back(x);
    }

    sort(A.begin(), A.end());

    cin >> M;

    for(int i=0;i<M;i++){
        int x;
        cin >> x;

        if(binary_search(A.begin(), A.end(), x))
            cout << 1 << '\n';
        else
            cout << 0 << '\n';
    }
}