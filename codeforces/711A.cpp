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
	long long int n;
	cin >> n;
	cin.get();
	vector<string> v;
	bool yr=0;
	while(n--)
	{
		string s;
		getline(cin,s);
		if(s[0]==s[1] && s[1]=='O' && yr==0)
		{
			yr=1;
			s[0]='+';
			s[1]='+';
		}
		if(s[3]==s[4] && s[4]=='O' && yr==0)
		{
			yr=1;
			s[3]='+';
			s[4]='+';
		}
		v.pb(s);
	}
	if(yr==0)
	{
		cout << "NO\n";
	}
	else
	{
		cout << "YES\n";
		for(auto i=v.begin();i!=v.end();i++)
		{
			cout << *i << endl;
		}
	}
	return 0;
}
