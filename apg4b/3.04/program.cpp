/*
構造体

#include <bits/stdc++.h>
using namespace std;

struct MyPair {
  int x;     // 1つ目のデータはint型であり、xという名前でアクセスできる
  string y;  // 2つ目のデータはstring型であり、yという名前でアクセスできる
};

int main() {
  MyPair p = {12345, "hello"};  // MyPair型の値を宣言
  cout << "p.x = " << p.x << endl;
  cout << "p.y = " << p.y << endl;
}
*/

/*
コンストラクタ

#include <bits/stdc++.h>
using namespace std;

struct NumString {
  int length;
  string s;
  // コンストラクタ
  NumString(int num) {
    cout << "constructor called" << endl;

    // 引数のnumを文字列化したものをsに代入し、sの文字数をlengthに代入する
    s = to_string(num);  // (STLの関数)
    length = s.size();
  }
};

int main() {
  NumString num(12345);  // コンストラクタに 12345 が渡される
  cout << "num.s = " << num.s << endl;
  cout << "num.length = " << num.length << endl;
}
*/

/*
コピーコンストラクタは次のように定義します。

struct 構造体名 {
  // コピーコンストラクタ
  構造体名(const 構造体名 &old) {
    // コンストラクタの内容
    // (oldの内容を使って初期化などを行う)
  }
};
*/

#include <bits/stdc++.h>
using namespace std;

// 以下に、24時間表記の時計構造体 Clock を定義する

// Clock構造体のメンバ変数を書く
//   int hour    時間を表す (0~23の値をとる)
//   int minute  分を表す   (0~59の値をとる)
//   int second  秒を表す   (0~59の値をとる)
struct Clock {
  int hour;
  int minute;
  int second;

// メンバ関数 set の定義を書く
//   関数名: set
//   引数: int h, int m, int s (それぞれ時、分、秒を表す)
//   返り値: なし
//   関数の説明:
//     時・分・秒を表す3つの引数を受け取り、
//     それぞれ、メンバ変数 hour, minute, second に代入する
  void set(int h, int m, int s) {
      hour = h;
      minute = m;
      second = s;
  }

// メンバ関数 to_str の定義を書く
//   関数名: to_str
//   引数: なし
//   返り値: string型
//   関数の仕様:
//     メンバ変数が表す時刻の文字列を返す
//     時刻の文字列は次のフォーマット
//     "HH:MM:SS"
//     HH、MM、SSはそれぞれ時間、分、秒を2桁で表した文字列
  string to_str() {
      char str[9];
      sprintf(str, "%02d:%02d:%02d", hour, minute, second);
      return (string) str;
  }

// メンバ関数 shift の定義を書く
//   関数名: shift
//   引数: int diff_second
//   返り値: なし
//   関数の仕様:
//     diff_second 秒だけメンバ変数が表す時刻を変更する(ただし、日付やうるう秒は考えない)
//     diff_second の値が負の場合、時刻を戻す
//     diff_second の値が正の場合、時刻を進める
//     diff_second の値は -86400 ~ 86400 の範囲を取とりうる
  void shift(int diff_second) {
    int now = hour * 60 * 60 + minute * 60 + second;
    now += diff_second;
    if (now < 0) {
      now = 60 * 60 * 24 + now;
    } else {
      now %= 60 * 60 * 24;
    }

    hour = now / (60 * 60);
    now -= hour * 60 * 60;

    minute = now / 60;
    now -= minute * 60;
    second = now;
  }
};

// -------------------
// ここから先は変更しない
// -------------------

int main() {
  // 入力を受け取る
  int hour, minute, second;
  cin >> hour >> minute >> second;
  int diff_second;
  cin >> diff_second;

  // Clock構造体のオブジェクトを宣言
  Clock clock;

  // set関数を呼び出して時刻を設定する
  clock.set(hour, minute, second);

  // 時刻を出力
  cout << clock.to_str() << endl;

  // 時計を進める(戻す)
  clock.shift(diff_second);

  // 変更後の時刻を出力
  cout << clock.to_str() << endl;
}
