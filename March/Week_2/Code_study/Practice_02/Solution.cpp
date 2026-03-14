#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;

    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++){
        cin >> A[i];
    }

    sort(A.begin(), A.end());

    int M;

    cin >> M;

    for (int i = 0; i < N; i++){
        int x;
        cin >> x;

        int count = upper_bound(A.begin(), A.end(), x) - lower_bound(A.begin(), A.end(d), x);

        cout << count << ' ';
    }

}