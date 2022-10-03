// #include<iostream>

// using namespace std;

// int main(){
//     int r,s;

//     cin>>r>>s;

//     int lr[r], ls[s];   int i, j;
    

//     for(i=0 ;i<r; i++)  cin>>lr[i];

//     for(i=0 ;i<s; i++)  cin>>ls[i];

//     int f1=0, f2=0;
//     int count =0;

//     i=0;
//     while(i<r){
//         for(j=0; j<r; j++){
//             // if(j!=i){
//             if(lr[i]%lr[j]==0)  f1++;
        
//         }
//         for(j=0; j<s; j++){
//             // if(j!=i){
//             if(lr[j]%lr[i]==0)  f3++;
        
//         }
//         if(f1==f2)  count++;

//         i++;
//     }

//     f1=0, f2=0;
//     i=0;
//     while(i<s){
//         for(j=0; j<r; j++){
//             // if(j!=i){
//             if(lr[i]%lr[j]==0)  f1++;
        
//         }
//         for(j=0; j<s; j++){
//             // if(j!=i){
//             if(lr[j]%lr[i]==0)  f2++;
        
//         }
//         if(f1==f2)  count++;

//         i++;
//     }

//     cout<<count;
//     return 0;
// }







// #include<iostream>

// using namespace std;

// int main(){
//     int p,t,a,b,x,y;

//     int i,j,s,count=0;

//     cin>>p>>t>>a>>b>>x>>y;

//     for(i=0; i<t; i++){
//         for(j=0; j<t; j++){
//            s= a-i*x + b-j*y;
//            if(s==p)    count++;
//         }
//     }

//     if(count!=0)    cout<<"YES";
//     else    cout<<"NO";

//     return 0;
// }

// #include<iostream>

// using namespace std;

// class A{
//     int x, y;
//     public: A(){cout<<"1";} ~A(){cout<<"2";}
// };

// class B{
//     int z;  A *o1;
//     public:
//     B(){cout<<"3";} void f1(){o1= new A;}  ~B(){cout<<"4";}
// };

// int main(){

//     B *o2 = new B;  
//     o2 -> f1();
//     delete (o2);
//     cout<<"5";

//     return 0;
// }








// #include<iostream>
// #include<math.h>


// using namespace std;

// int main(){

//    long long int n;

//    cin>>n;

//     int *y[n];
//     y = {pow(1,n)+pow(2,n)+pow(3,n)+pow(4,n)};
   
    
//     cout<<z;

//     return 0;
// }



// #include <iostream>
// using namespace std;

// /* Iterative Function to calculate (x^y)%p in O(log y) */
// int power(long long x, unsigned int y, int p) 
// { 
// 	int res = 1;	 // Initialize result 

// 	x = x % p; // Update x if it is more than or 
// 				// equal to p

// 	if (x == 0) return 0; // In case x is divisible by p;

// 	while (y > 0) 
// 	{ 
// 		// If y is odd, multiply x with result 
// 		if (y & 1) 
// 			res = (res*x) % p; 

// 		// y must be even now 
// 		y = y>>1; // y = y/2 
// 		x = (x*x) % p; 
// 	} 
// 	return res; 
// } 

// // Driver code 
// int main() 
// { 
// 	int x = 2; 
// 	int y = 5; 
// 	int p = 13; 
// 	cout << "Power is " << power(x, y, p); 
// 	return 0; 
// } 

// // This code is contributed by shubhamsingh10








// #include<iostream>

// using namespace std;

// long int SubArraySum(int arr[], int n)
// {
//     long int result = 0,temp=0;
 
//     // Pick starting point
//     for (int i=0; i <n; i++)
//     {
//         // Pick ending point
//         temp=0;
//         for (int j=i; j<n; j++)
//         {
//             // sum subarray between current
//             // starting and ending points
//             temp+=arr[j];
//             result += temp ;
//         }
//     }
//     return result ;
// }

// int main(){
//     int t,n,i,j,k;

//     cin>>t>>n;

//     int ar[n];

//     for(i=0; i<n; i++)  cin>>ar[i];
    
//     int max=1;
//     while(t--){
//         int result = 0;
//         for (int i = 0; i < n; i++) {
//         int sum = 0;
//         for (int j = i; j < n; i++) {
//         sum += ar[j];
//         result += sum;
//         }
//         }

//                 cout<<max;
//             }
 
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// void decrypt(unsigned char *enc, int plain_text_length, int shift_count) {
//     int dec[plain_text_length];

//     dec[0] = enc[0] - '0';

//     /*
//      * Decryption algorithm for bits up to K (shift_count) is "c[i] XOR c[i-1]"
//      */
//     for (int i = 1; i < shift_count; i++) {
//     	dec[i] = (enc[i] - '0') ^ (enc[i - 1] - '0');
//     }

//     /*
//      * If K (shift_count) < N (plain text length), another algorithm is required 
//      * to decrypt bits between K and N: "c[i] XOR c[i-1] XOR p[i - K]"
//      *
//      * If K >= N, this loop is skipped automatically. Above loop takes care of all decryption.
//      */
//     for (int i = shift_count; i < plain_text_length; i++) {
//     	dec[i] = (enc[i] - '0') ^ (enc[i - 1] - '0') ^ dec[i - shift_count];
//     }

//     for (int i = 0; i < plain_text_length; i++) {
//     	printf("%d", dec[i]);
//     }
// }


// int main() {
//     int N;
//     int K;

//     scanf("%d", &N);
//     scanf("%d", &K);
//     unsigned char encrypted_data[N + K]; //length includes the terminating NULL character

//     scanf("%s", encrypted_data);
//     decrypt(encrypted_data, N, K);

//     return 0;
// }




// #include <string>
// #include <iostream>
// using namespace std;
    
// string solve(int n, int k, const string& s)
// {
//     string res ="";
//     bool x = 0;
//     for (int i = 0; i < n; ++i)
//     {
//         if (i >= k)
//         {
//             x ^= res[i-k]-'0';
//         }
//         res.push_back('0'+((s[i]-'0')^x));
//         x ^= res.back()-'0';
//     }
//     return res;
// }
    
// int main()
// {
//     int n,k;
//     string s;
//     cin >> n >> k >> s;
//     cout << solve(n,k,s);
//     return 0;
// }



// #include <iostream>
// #include <string.h>
// using namespace std;

// /* Returns length of longest
// common substring of X[0..m-1]
// and Y[0..n-1] */
// int LCSubStr(char* X, char* Y, int m, int n)
// {
// 	// Create a table to store
// 	// lengths of longest
// 	// common suffixes of substrings.
// 	// Note that LCSuff[i][j] contains
// 	// length of longest common suffix
// 	// of X[0..i-1] and Y[0..j-1].

// 	int LCSuff[m + 1][n + 1];
// 	int result = 0; // To store length of the
// 					// longest common substring

// 	/* Following steps build LCSuff[m+1][n+1] in
// 		bottom up fashion. */
// 	for (int i = 0; i <= m; i++)
// 	{
// 		for (int j = 0; j <= n; j++)
// 		{
// 			// The first row and first column
// 			// entries have no logical meaning,
// 			// they are used only for simplicity
// 			// of program
// 			if (i == 0 || j == 0)
// 				LCSuff[i][j] = 0;

// 			else if (X[i - 1] == Y[j - 1]) {
// 				LCSuff[i][j] = LCSuff[i - 1][j - 1] + 1;
// 				result = max(result, LCSuff[i][j]);
// 			}
// 			else
// 				LCSuff[i][j] = 0;
// 		}
// 	}
// 	return result;
// }

// // Driver code
// int main()
// {
// 	char X[] = "ABCD";
// 	char Y[] = "ABDC";

// 	int m = strlen(X);
// 	int n = strlen(Y);

// 	cout << "Length of Longest Common Substring is "
// 		<< LCSubStr(X, Y, m, n);
// 	return 0;
// }








#include <bits/stdc++.h>
using namespace std;
 
// Function to find the length of the longest common subsequence of
// sequences `X[0…m-1]` and `Y[0…n-1]`
int LCSLength(string X, string Y, int m, int n)
{
    // return if the end of either sequence is reached
    if (m == 0 || n == 0) {
        return 0;
    }
 
    // if the last character of `X` and `Y` matches
    if (X[m - 1] == Y[n - 1]) {
        return LCSLength(X, Y, m - 1, n - 1) + 1;
    }
 
    // otherwise, if the last character of `X` and `Y` don't match
    return max(LCSLength(X, Y, m, n - 1), LCSLength(X, Y, m - 1, n));
}
 
int main()
{
    string X;
    getline(cin, X);

    string Y;
    getline(cin, Y);
 
    cout<<LCSLength(X, Y, X.length(), Y.length());
    cout << endl;
    cout << endl;
    return 0;
}
