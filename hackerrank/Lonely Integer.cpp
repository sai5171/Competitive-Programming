//header macros
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <functional>
#include <vector>
#include <deque>
#include <set>
#include <map>
#include <unordered_map>
#include <list>
#include <string>
#include <cmath>
#include <iomanip>/*cout << setprecision (10) << fixed;*/
//end header macros
//input macros
# define PI	3.141592653589793238462643383279502884L
#define fr(i,a,n) for(i=a;i<n;i++)
#define pb push_back
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
	unordered_map<long long int,long long int> m;
	long long int n;
	cin >> n;
	while(n--)
	{
	    long long int x;
	    cin >> x;
	    long long int sum=m[x];
	    sum++;
	    m[x]=sum;
	}
	for(auto i=m.begin();i!=m.end();i++)
	{
	    if(i->second==1)
	    {
	        cout << i->first << endl;
	        break;
	    }
	}
	return 0;
}
