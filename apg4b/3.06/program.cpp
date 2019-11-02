/*

#include <bits/stdc++.h>
using namespace std;

int main() {
  for (int i = 0; i <= ('Z' - 'A'); i++) {
    cout << (char)('A' + i);
  }
}
*/

/*
const修飾子
const修飾子を変数の宣言時につけると、その変数を定数（変えられない値）として扱えるようになります。 
const int a = 10;
*/

/*
条件演算子
int answer = a < b ? a : b;
*/

/*
ラムダ式の記法
auto 関数名 = [](引数の型1 引数名1, 引数の型2, 引数名2, ...) { 関数の処理 };

[&]と書くことでラムダ式の外の変数を利用できます。

// 今まで受け取った値の中から最も大きな値を返す関数
auto get_max = [&](int n) {
  if (max_num < n) {
    max_num = n;
  }
  return max_num;
};

ラムダ式による再帰関数
ラムダ式で再帰呼び出しのある関数を定義する場合、autoではなくfunctionを型として指定する必要があります。

#include <bits/stdc++.h>
using namespace std;

int main() {
  // 再帰関数の定義
  function<int(int)> sum = [&](int n) {
    if (n == 0) {
      return 0;
    }
    int s = sum(n - 1);
    return s + n;
  };

  cout << sum(3) << endl;
}
*/

/*
ラムダ式の使い道

#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> v = { 2, 3, 1 };
  // 大きい順にソートさせる比較関数を直接渡す
  sort(v.begin(), v.end(), [](int a, int b) { return a > b; });

  cout << v[0] << endl; // {3, 2, 1}となっている
}
*/

/*
next_permutation関数
next_permutation関数は「順列の全列挙」を行うための関数です。

#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> v = { 2, 1, 3 };
  sort(v.begin(), v.end());
  do {
    // 1行で今の並び方を出力
    for (int x : v) {
      cout << x << " ";
    }
    cout << endl;
  } while (next_permutation(v.begin(), v.end()));
}
*/

#include <bits/stdc++.h>
using namespace std;

// 変数の結果が入る
map<string, int> var_map;

void int_operand() {

}
 
int main() {
  int N;
  cin >> N;

  for (int i = 0; i < N; i++) {
    // int, print_intなどの命令が入る
    string operand;
    cin >> operand;

    if (operand == "int") {
      int_operand();
      cout << "int!!" << endl;
      // varnameは代入する変数名
      string varname, equal;
      cin >> varname >> equal;

      // 最終結果を入れる
      int result = 0;
      // 現在処理中の文字
      char current = ' ';
      bool isadd = true;
      while (current != ';') {
        cin >> current;
        if (current == '+') {
          isadd = true;
        } else if (current == '-') {
          isadd = false;
        } else if (current == ';') {
          var_map[varname] = result;
        } else //if ()
         {
          int val = ((int) current) - 48;
      cout << current << " cr " << val << endl;
          if (isadd) {
            result += val;
          } else {
            result -= val;
          }
          // isadd ? result += val : result -= val;
        }
      }
      cout << result << endl;
    }
  }
} 

/*
2
int x = 1 ;
print_int x ;
*/