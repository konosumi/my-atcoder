/*
キーポイント
  スペース・改行・インデントを使ってプログラムを見やすくする
  プログラムは「書く→実行→正しく動作することを確認」で初めて完成と言える
  コンパイルエラーは文法のエラーで、プログラムは実行されない
  実行時エラーは内容のエラーで、プログラムは強制終了される
  論理エラーは内容のエラーで、プログラムは正しく動いているように見えてしまう
  エラーは「実行して動作を確認する」「Webで検索する」等して修正する
  エラーの大まかな発生箇所は./Main.cpp:行:文字目: errorからわかる
  エラーメッセージが複数表示された場合は最初のエラーから直す
*/

/*
#include <bits/stdc++.h>
using namespace std;
 
int main() {
  // 基本的に{が出てきたら一段インデントし、}が出てきたら一段戻します。
  // ←インデント
  cout << "こんにちは世界" << endl;
  cout << "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    << "abcdefghijklmnopqrstuvwxyz" // 長いので改行してインデント
    << endl;
}
*/

// 次のプログラムでは、coutの前に全角スペースが紛れ込んでいます。
// ./Main.cpp:6:1: error: stray ‘\343’ in program
// ./Main.cpp:6:1: error: stray ‘\200’ in program
// セミコロン忘れ
// ./Main.cpp:6:1: error: expected ‘;’ before ‘}’ token
// 大量のエラーメッセージが表示された場合、とりあえず一番最初のエラーメッセージだけを見ると良いです。 
// コンパイルエラー集
// https://atcoder.jp/contests/apg4b/tasks/APG4b_am

#include <bits/stdc++.h>
using namespace std;

int main() {
  cout << "いつも" << 2525 << endl;
  cout << "AtCoderくん" << endl;
}
