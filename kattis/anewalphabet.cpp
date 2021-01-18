//header macros
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <climits>
#include <cmath>
#include <string>
#include <iomanip>/*cout << setprecision (10) << fixed;*/
#include <fstream>
#include <array>
#include <stack>
#include <queue>
#include <vector>
#include <deque>
#include <list>
#include <forward_list>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <functional>
//end header macros
//input macros
# define PI	3.141592653589793238462643383279502884L
#define fr(i,a,n) for(i=a;i<n;i++)
#define pb push_back
#define pf push_front
#define gcd __gcd
#define lli long long int
#define sflli(x) scanf("%lld",&x);
//#define cin fin
//#define cout fout
//end input macros
using namespace std;
int main(){
	//ifstream fin ("a.in");
	//ofstream fout ("a.ou");
	ios_base::sync_with_stdio(false);
	string s;
	getline(cin,s);
	for(auto i=0;i<s.size();i++)
	{
		if(s[i]=='a' || s[i]=='A')
			cout << "@";
		else if(s[i]=='n' || s[i]=='N')
			cout << "[]\\[]";
		else if(s[i]=='b' || s[i]=='B')
			cout << "8";
		else if(s[i]=='o' || s[i]=='O')
			cout << "0";
		else if(s[i]=='c' || s[i]=='C')
		cout << "(";
		else if(s[i]=='p' || s[i]=='P')
			cout << "|D";
		else if(s[i]=='d' || s[i]=='D')
			cout <<"|)";
		else if(s[i]=='q' || s[i]=='Q')
			cout << "(,)";
		else if(s[i]=='e' || s[i]=='E')
			cout << "3";
		else if(s[i]=='r' || s[i]=='R')
			cout << "|Z";
		else if(s[i]=='f' || s[i]=='F')
			cout << "#";
		else if(s[i]=='s' || s[i]=='S')
			cout << "$";
		else if(s[i]=='g' || s[i]=='G')
			cout << "6";
		else if(s[i]=='t' || s[i]=='T')
			cout << "']['";
		else if(s[i]=='h' || s[i]=='H')
			cout << "[-]";
		else if(s[i]=='u' || s[i]=='U')
			cout << "|_|";
		else if(s[i]=='i' || s[i]=='I')
			cout << "|";
		else if(s[i]=='v' || s[i]=='V')
			cout << "\\/";
		else if(s[i]=='j' || s[i]=='J')
			cout << "_|";
		else if(s[i]=='w' || s[i]=='W')
			cout << "\\/\\/";
		else if(s[i]=='k' || s[i]=='K')
			cout << "|<";
		else if(s[i]=='x' || s[i]=='X')
			cout << "}{";
		else if(s[i]=='l' || s[i]=='L')
			cout << "1";
		else if(s[i]=='y' || s[i]=='Y')
			cout << "`/";
		else if(s[i]=='m' || s[i]=='M')
			cout << "[]\\/[]";
		else if(s[i]=='z' || s[i]=='Z')
			cout << "2";
		else
			cout << s[i];
	}
	return 0;
}
