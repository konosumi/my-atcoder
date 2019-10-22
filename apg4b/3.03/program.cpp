/*
map
  連想配列や辞書と呼ばれるデータ構造
  mapを用いると「特定の値に、ある値が紐付いている」ようなデータを扱うことができる
  mapの宣言
map<Keyの型, Valueの型> 変数名;

mapの操作
値の追加 	変数[key] = value; 	O(logN)
値の削除 	変数.erase(key); 	O(logN)
値へのアクセス 	変数.at(key) 	O(logN)
所属判定 	変数.count(key) 	O(logN)
要素数の取得 	変数.size() 	O(1)
*/

/*
#include <bits/stdc++.h>
using namespace std;
 
int main() {
  map<string, int> score;  // 名前→成績
  score["Alice"] = 100;
  score["Bob"] = 89;
  score["Charlie"] = 95;
 
  cout << score.at("Alice") << endl;   // Aliceの成績
  cout << score.at("Bob") << endl;     // Bobの成績
  cout << score.at("Charlie") << endl; // Daveの成績
}
*/

/*
キューや待ち行列と呼ばれるデータ構造
queueを用いると「値を1つずつ追加していき、追加した順で値を取り出す」ような処理を行うことができる
queueの宣言
  queue<型> 変数名;

操作 	記法 	計算量
要素の追加 	変数.push(値); 	O(1)
先頭の要素へのアクセス 	変数.front() 	O(1)
先頭の要素を削除 	変数.pop(); 	O(1)
要素数の取得 	変数.size() 	O(1)

#include <bits/stdc++.h>
using namespace std;
 
int main() {
  queue<int> q;
  q.push(10);
  q.push(3);
  q.push(6);
  q.push(1);
 
  // 空でない間繰り返す
  while (!q.empty()) {
    cout << q.front() << endl;  // 先頭の値を出力
    q.pop();  // 先頭の値を削除
  }
}
*/

/*
priority_queue
  優先度付きキューと呼ばれるデータ構造
  priority_queueを用いると「それまでに追加した要素のうち、最も大きいものを取り出す」という処理を行うことができる
  priority_queueの宣言
priority_queue<型> 変数名;
    priority_queueの操作
操作 	記法 	計算量
要素の追加 	変数.push(値) 	O(logN)
最大の要素の取得 	変数.top() 	O(1)
最大の要素を削除 	変数.pop(); 	O(logN)
要素数の取得 	変数.size() 	O(1)

  値が小さい順に取り出されるpriority_queueの宣言
priority_queue<型, vector<型>, greater<型>> 変数名;

#include <bits/stdc++.h>
using namespace std;
 
int main() {
  priority_queue<int> pq;
  pq.push(10);
  pq.push(3);
  pq.push(6);
  pq.push(1);
 
  // 空でない間繰り返す
  while (!pq.empty()) {
    cout << pq.top() << endl;  // 最大の値を出力
    pq.pop();  // 最大の値を削除
  }
}
*/

/*
set
setは重複の無いデータのまとまりを扱うためのデータ型です。 「Keyだけのmap」のようなイメージです。実際にmapで代用することもできます。
setは以下のような処理を行う場合などに有用です。
  配列の中に出現する値の種類数（重複の無い集合の要素数）
  集合の中にある値が含まれるかを高速に計算する
  集合の中に含まれる最小値（最大値）を求める

#include <bits/stdc++.h>
using namespace std;

int main() {
  set<int> S;

  S.insert(3);
  S.insert(7);
  S.insert(8);
  S.insert(10);
  // 既に3は含まれているのでこの操作は無視される
  S.insert(3);

  // 集合の要素数を出力
  cout << "size: " << S.size() << endl;

  // 7が含まれるか判定
  if (S.count(7)) {
    cout << "found 7" << endl;
  }
  // 5が含まれるか判定
  if (S.count(5)) {
    cout << "found 5" << endl;
  }
}
*/

/*
stack

「新しく追加したものほど先に取り出される」ような処理を行うデータ構造をスタックといいます。 C++では、STLのstackを用いることができます。
#include <bits/stdc++.h>
using namespace std;

int main() {
  stack<int> s;
  s.push(10);
  s.push(1);
  s.push(3);

  cout << s.top() << endl;  // 3 (最後に追加した値)
  s.pop();
  cout << s.top() << endl;  // 1 (その前に追加した値)
}
*/

/*
deque
「最初に追加したものを取り出す」というキューの操作と 「最後に追加した要素を取り出す」というスタックの操作を同時に行えるデータ構造を両端キューといいます。 C++では、STLのdequeを用いることができます。（「デック」と読みます。）

unordered_map
C++のSTLのunordered_mapは、基本的な機能はmapと同じですがアクセスや検索を高速に行うことができるデータ構造です。 ただし、Keyとしてpairを直接用いることができないなどの制約もあります。

unordered_set
C++のSTLのunordered_setは、unordered_mapと同様に、制約がある代わりに高速なsetです。
制約
  pairやtupleなどのハッシュ関数が定義されていない型をKeyとして用いることができない
  ループで取り出すときに、どのような順番で取り出されるかが分からない
  最大値や最小値を取り出すことができない
*/



#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  int maxKey = 0, maxValue = 0;
  map<int, int> A;
  for (int i = 0; i < N; i++) {
    int B;
    cin >> B;
    if (A.count(B)) {
      A[B]++;
    } else {
      A[B] = 1;
    }

    if (A[B] > maxValue) {
        maxKey = B;
        maxValue = A[B];
    }
  }

  cout << maxKey << " " << maxValue << endl;
}
