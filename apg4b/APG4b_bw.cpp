/**
 * EX26 - 電卓を作ろう3 / 3.06
 * https://atcoder.jp/contests/apg4b/tasks/APG4b_bw
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
      for (int v = 0; v < vecValue.size(); v++) {
         if (calcResult.size() < v + 1) {
           calcResult.push_back(0);
         }

         isAdd ? calcResult.at(v) += vecValue.at(v) : calcResult.at(v) -= vecValue.at(v);
      }
      vecValue.clear();
    } else {
      vector<int> vec = vecVarMap[current];
      for (int v = 0; v < vec.size(); v++) {
        if (calcResult.size() < v + 1) {
          calcResult.push_back(0);
        }

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
