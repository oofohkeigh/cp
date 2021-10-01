//ARRQUERY

#include <bits/stdc++.h>
using namespace std;


int main() {
  int n, q, l, r, x, count;
  cin >> n >> q;
  int a[n];
  int temp[q][3];
  for(int i = 0; i < n; i++)  cin >> a[i];
  for(int i = 0; i < q; i++) {
    cin>> temp[i][0] >> temp[i][1] >> temp[i][2];
  }

  for(int i = 0; i < q; i++){
    count = 0;
    for(int j = temp[i][0]-1; j < temp[i][1]; j++){
      if(a[j] >= temp[i][2]) count++;
    }
    cout << count << endl;
  }

  return 0;
}







#include <bits/stdc++.h>
using namespace std;

void testcase() {
  int n;
  cin >> n;
  deque <int> q(n);
  for(int i = 0; i < n; i++)  cin >> q[i];
  int min = q.front();
  int pos;
  for(int i = 1; i < n; i++) {
    if(q[i] < min) {
      min = q[i];
      pos = i;
    }
  }
  deque <int> nq(n);
  // nq.push_front(q[0]);
  for(int i = 0; i < pos; i++) {
    nq.push_back(q[i]);
  }
  nq.push_front(min);
  for(int i = 0; i < pos; i++) {
    nq.push_back(q[i]);
  }
  for(int i = 0; i < n; i++)  cout << nq[i] << " ";
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
