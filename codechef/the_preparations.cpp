//  https://www.codechef.com/START13C



// SUPCHEF

// #include <bits/stdc++.h>
// using namespace std;
//
// void testcase() {
//   int m, n, k;
//   cin >> m >> n >> k;
//   if((n * k) < m) cout << "yes\n";
//   else  cout << "no\n";
// }
//
// int main() {
//   int t;
//   cin >> t;
//   while(t--) {
//     testcase();
//   }
//   return 0;
// }


//   VACCINQ

// #include <bits/stdc++.h>
// using namespace std;
//
// void testcase() {
//   int n, p, x, y;
//   cin >> n >> p >> x >> y;
//   int arr[n];
//   for(int i = 0; i < n; i++)  cin>>arr[i];
//   int time = 0;
//   for(int j = 0; j < p-1; j++) {
//     if(arr[j] == 0) time += x;
//     else  time += y;
//   }
//   time += y;
//   cout << time << endl;
// }
//
// int main() {
//   int t;
//   cin >> t;
//   while(t--) {
//     testcase();
//   }
//   return 0;
// }



//  DIWALI1

// #include <bits/stdc++.h>
// using namespace std;
//
// void testcase() {
//   long long p, a, b, c, x, y;
//   cin >> p >> a >> b >> c >> x >> y;
//   long long oneAnar, oneChakri;
//   oneAnar = b + x*a;
//   oneChakri = c + y*a;
//
//   cout << p / min(oneAnar, oneChakri) << endl;
// }
//
// int main() {
//   int t;
//   cin >> t;
//   while(t--) {
//     testcase();
//   }
//   return 0;
// }




//  MAGDOORS

// #include <bits/stdc++.h>
// using namespace std;
//
// void testcase() {
//   string s;
//   cin >> s;
//   bool flipped = false;
//   int count = 0;
//
//   for(int i = 0; i < s.size(); i++) {
//     if((s[i] == '0' && flipped == false) || (s[i] == '1' && flipped == true)) {
//       count ++;
//       flipped = !flipped;
//     }
//   }
//   cout << count << endl;
// }
//
// int main() {
//   int t;
//   cin >> t;
//   while(t--) {
//     testcase();
//   }
//   return 0;
// }







#include <bits/stdc++.h>
#include <deque>
using namespace std;

void testcase() {
  int n;
  cin >> n;
  list <int> mylist(n);
  for (auto it = mylist.begin(); it != mylist.end(); ++it)  cin >> *it;
  int min = mylist.front();
  for (auto it = mylist.begin(); it != mylist.end(); ++it) {
    if(*it < min)  min = *it;
  }
//   list <int> newlist(n);
  cout<<endl;
  // nq.push_front(q[0]);
  // nq.push_back(q[1]);
  for (auto it = mylist.begin(); it != mylist.end(); ++it) {
    if(*it == min) newlist.push_front(*it);
    else  newlist.push_back(*it);
    // cout << nq[i];
  }
  for (auto it = newlist.begin(); it != newlist.end(); ++it)  cout << *it << " ";
  cout << endl;
}

int main() {
  int t;
  cin >> t;
  while(t--) {
    testcase();
  }
  return 0;
}
