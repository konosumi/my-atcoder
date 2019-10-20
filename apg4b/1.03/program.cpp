/*
キーポイント
演算子 	計算内容
+ 	足し算
- 	引き算
* 	掛け算
/ 	割り算
% 	割った余り
*/

/*
#include <bits/stdc++.h>
using namespace std;
 
int main() {
  cout << 1 + 1 << endl; // 2
  cout << 3 - 4 << endl; // -1
  cout << 2 * 3 << endl; // 6
  cout << 7 / 3 << endl; // 2
  cout << 7 % 3 << endl; // 1
  cout << 4 % 5 << endl; // 4
  // ( )を使って優先順位を変えることもできます。
  cout << (1 + 2) * 3 << endl; // 9
  // 0で割ると実行時エラーが発生します。
  cout << 3 / 0 << endl;
}
*/

/*
剰余演算A % Bを行う時にAまたはBが負の数の場合、計算結果は以下のようになります。|A|,|B|はそれぞれの絶対値を表すとします。
Aが正のとき：|A|%|B|
Aが負のとき：−|A|%|B|
*/

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    // 1/2×100×(100+1)
    cout << 1 * 100 * (100 + 1) / 2 /* ここに式を書く */ << endl;
}
