/**
 * D - I hate Factorization
 * https://atcoder.jp/contests/abc166/tasks/abc166_d
 */
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    // A5−B5=X を満たす整数の組 (A,B) をひとつ示してください。 ただし、与えられる X に対して、条件を満たす整数の組 (A,B) が存在することが保証されています。
    long long X;
    cin >> X;

    for (long long a = 0; a < INT_MAX; a++) {
        for (long long b = 0; b < a; b++) {
            long long a5 = a * a * a * a * a;
            long long b5 = b * b * b * b * b;
            if ((a5 - b5) == X) {
                cout << a << ' ' << b << endl;
                return 0;
            } else if ((a5 + b5) == X) {
                cout << a << " -" << b << endl;
                return 0;
            }
        }
    }

}
 