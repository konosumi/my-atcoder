/**
 * D - RGB Tripletsc
 * https://atcoder.jp/contests/abc162/tasks/abc162_d
 */
#include <bits/stdc++.h>
using namespace std;

vector <int> stack2vector(stack<int> st) {
    vector<int> vec(st.size());

    int i = 0;
    while (!st.empty()) {
        vec.at(i) = st.top();
        st.pop();
        i++;
    } 
    return vec;
}


int main() {
    // R, G, B のみからなる、長さ N の文字列 S があります。
    int N;
    string S;
    cin >> N >> S;

    // 以下の 2 つの条件をともに満たす組 (i, j, k) (1≤i<j<k≤N) の数を求めてください。
    // Si≠Sj かつ Si≠Sk かつ Sj≠Sk である
    // j−i≠k−j である
    stack<int>r;
    stack<int>g;
    stack<int>b;
    for (int i = 0; i < S.size(); i++) {
        if (S[i] == 'R') {
            r.push(i);
        } else if (S[i] == 'G') {
            g.push(i);
        } else if (S[i] == 'B') {
            b.push(i);
        }
    }

    vector<int> rv = stack2vector(r);
    vector<int> gv = stack2vector(g);
    vector<int> bv = stack2vector(b);

    for (int i = 0; i < rv.size(); i++) {
        for (int j = 0; j < gv.size(); j++) {
            for (int k = 0; k < bv.size(); k++) {
                if (rb.at() )
            }
        }

    }

    //int cnt = min(min(r.size(), g.size()), b.size());
    //cout << cnt << endl;
}
