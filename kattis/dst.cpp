//header macros
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>/*cout << setprecision (10) << fixed;*/
#include <fstream>
#include <array>
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
#define gcd __gcd
#define lli long long int
#define sflli(x) scanf("%lld",&x);
//#define cin fin
//#define cout fout
//end input macros
using namespace std;
int main(){
	//ifstream fin ("a.in");
	//ofstream fout ("a.ans");
	ios_base::sync_with_stdio(false);
	long long int t;
	cin >> t;
	cin.get();
	while(t--)
	{
	  char x;
	  int d,h,m;
	  cin >> x >> d >> h >> m;
	  if(x=='F')
	  {
	    m+=d;
	    h+=m/60;
	    m=m%60;
	    if(h>=24)
	      h=h-24;
	    cout << h << " " << m << endl;
	  }
	  else
	  {
	    d=1440-d;
	    m+=d;
	    h+=m/60;
	    m=m%60;
	    if(h>=24)
	      h=h-24;
	    cout << h << " " << m << endl;
	  }
	}
	return 0;
}
