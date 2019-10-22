/*
キーポイント
pair
  pair型は2つの値の組を表す
  pair<値1の型, 値2の型> 変数名;で宣言する
  変数名.firstで1番目の値、変数名.secondで2番目の値にアクセスできる
  make_pair(値1, 値2)でpairを生成することができる
  tie(変数1, 変数2) = pair型の値;でpairを分解することができる
tuple
  tuple型は複数個の値の組を表す
  tuple<値1の型, 値2の型, 値3の型, (...)> 変数名;(必要な分だけ型を書く)で宣言する
  make_tuple(値1, 値2, 値3, (...))でtupleを生成することができる
  tie(変数1, 変数2, 変数3, (...)) = tuple型の値;でtupleを分解することができる
pair/tupleの比較
  1番目の値から比較され、等しい場合は次の値で比較される
auto
  変数宣言や範囲for文において、autoを用いることで、型を省略して書くことができる
  autoで参照を作ることもできる
*/

/*
pair

#include <bits/stdc++.h>
using namespace std;
 
int main() {
  pair<string, int> p("abc", 3);
  cout << p.first << endl;  // abc
 
  p.first = "hello";
  cout << p.first << endl;  // hello
  cout << p.second << endl; // 3
 
  p = make_pair("*", 1);
 
  string s;
  int a;
  tie(s, a) = p;
  cout << s << endl;  // *
  cout << a << endl;  // 1
}
*/

/*
tuple

#include <bits/stdc++.h>
using namespace std;
 
int main() {
  tuple<int, string, bool> data(1, "hello", true);
  get<2>(data) = false;
  cout << get<1>(data) << endl;  // hello
 
  data = make_tuple(2, "WORLD", true);
 
  int a;
  string s;
  bool f;
  tie(a, s, f) = data;
  cout << a << " " << s << " " << f << endl;  // 2 WORLD 1
}
*/

/*
auto
初期化を伴って変数を宣言する場合や範囲for文において、型の部分にautoと書くことによって型を省略することができます。

#include <bits/stdc++.h>
using namespace std;
 
string concat(string a, string b) {
  return a + b;
}
 
int main() {
  string a = "Hello,";
  string b = "World";
  auto ab = concat(a, b);  // string型
  cout << ab << endl;
 
  vector<int> c = {1, 2, 3};
  auto d = c;  // vector<int>型
 
  for (auto elem : d) {
    // elemはint型
    cout << elem << endl;
  }
}
*/

/*
ignore
pairやtupleを分解する際に要らない要素を捨てたい場合、ignoreをtieの引数に渡すことで、対応する位置の値を捨てることができます。

#include <bits/stdc++.h>
using namespace std;
 
int main() {
  pair<int, int> p(3, 5);
  int right;
  tie(ignore, right) = p;  // 2番目の値だけ取り出す
  cout << right << endl; // 5
 
  tuple<int, string, bool> tpl(2, "hello", false);
  int x;
  string s;
  tie(x, s, ignore) = tpl;  // 1番目の値、2番目の値だけ取り出す
  cout << x << " " << s << endl; // 2 hello
}
*/

/*
型エイリアス
型エイリアスを用いると型に別の名前をつけることができます。 pairやtupleなど型名が長くなってしまう場合に型エイリアスを使うと便利です。

#include <bits/stdc++.h>
using namespace std;
 
int main() {
  using pii = pair<int, int>;
  // これ以降 pii という型名はpair<int, int> と同じ意味で使える
 
  pii p;
  p = make_pair(1, 2);
  cout << "(" << p.first << ", " << p.second << ")" << endl;
  p = pii(3, 4);  // 別のpairを作って代入
  cout << "(" << p.first << ", " << p.second << ")" << endl;
}
*/


#include <bits/stdc++.h>
using namespace std;
 
int main() {
  typedef pair<int, int> pii;
  int N;
  cin >> N;
  vector<pii> ab(N);

  for (int i = 0; i < N; i++) {
    // cin >> ab.at(i).second >> ab.at(i).first;
    cin >> ab.at(i).first >> ab.at(i).second;
  }

  // sort(ab.begin(), ab.end());

  for (int i = 0; i < N; i++) {
    for (int j = N - 1; j > 0; j--) {
      if (ab.at(j).second < ab.at(j - 1).second) {
          swap(ab.at(j), ab.at(j - 1));
      }
    }
  }

  for (int i = 0; i < N; i++) {
      // cout << ab.at(i).second << " " << ab.at(i).first << endl;
      cout << ab.at(i).first << " " << ab.at(i).second << endl;
  }
}
