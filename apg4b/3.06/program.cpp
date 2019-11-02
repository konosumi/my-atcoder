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
map<char, int> varMap;
map<char, vector<int>> vecVarMap;

// 現在処理中の文字
char current;

// 文字を数値に変換する関数
int char2int(char current) {
  // 0はasciiコードで48である
  return ((int) current) - 48;
}

int intExpr() {
  // 計算結果を入れる
  int calcResult = 0;

  bool isAdd = true;
  for (int i = 0; i < 999; i++) {
    cin >> current;
    if (current == '+') {
      isAdd = true;
    } else if (current == '-') {
      isAdd = false;
    } else if (current == ';' || current == ',' || current == ']') {
      break;
    } else {
      int intVal = char2int(current);
      // 0〜9の数値ではなく変数だった場合
      if (intVal < 0 || 9 < intVal) {
        intVal = varMap[current];
      }
      isAdd ? calcResult += intVal : calcResult -= intVal;
    }
  }

  return calcResult;
}

void intOperand() {
  char varName, equal;
  cin >> varName >> equal;

  // 計算結果を入れる
  varMap[varName] = intExpr();
}

void printIntOperand() {
  cout << intExpr() << endl;
}

vector<int> vecExpr() {
  vector<int> calcResult, vecValue;

  bool isAdd = true;
  // 最初はまず読み取る
  cin >> current;
  for (int i = 0; i < 999; i++) {
    if (current == '+') {
      isAdd = true;
    } else if (current == '-') {
      isAdd = false;
    } else if (current == ';') {
      break;
    } else if (current == '[' || current == ',') {
      vecValue.push_back(intExpr());
      continue;
    } else if (current == ']') {
      // cout << "vec num" << vecValue.size() << endl;
      for (int v = 0; v < vecValue.size(); v++) {
         if (calcResult.size() < v + 1) {
           calcResult.push_back(0);
         }
cout << "asize " << vecValue.size() << " " << v << " " << calcResult.size() << endl;

         isAdd ? calcResult.at(v) += vecValue.at(v) : calcResult.at(v) -= vecValue.at(v);
      }
      vecValue.clear();
    } else {
      vector<int> vec = vecVarMap[current];
      for (int v = 0; v < vec.size(); v++) {
        if (calcResult.size() < v + 1) {
          calcResult.push_back(0);
        }
cout << "bsize " << vec.size() << " " << calcResult.size() << endl;

        isAdd ? calcResult.at(v) += vec.at(v) : calcResult.at(v) -= vec.at(v);
      }
    }

    cin >> current;
  }

  return calcResult;
}

void vecOperand() {
  char varName, equal;
  cin >> varName >> equal;

  // 計算結果を入れる
  vecVarMap[varName] = vecExpr();
}

void printVecOperand() {
  vector<int> vec = vecExpr();

  cout << "[ ";
  for (int i = 0; i < vec.size(); i++) {
    cout << vec.at(i) << " ";
  }
  cout << "]" << endl;
}

int main() {
  int N;
  cin >> N;

  for (int i = 0; i < N; i++) {
    // int, print_intなどの命令が入る
    string operand;
    cin >> operand;

    if (operand == "int") {
      intOperand();
    } else if (operand == "print_int") {
      printIntOperand(); 
    } else if (operand == "vec") {
      vecOperand();
    } else if (operand == "print_vec") {
      printVecOperand();
    }
  }
}
