/************************************
 *	AUTHOR: 		Divyansh Gaba	*
 *	INSTITUTION: 	ASET, BIJWASAN	*
 ************************************/
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0);
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i <= b; i++)


using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

int main()
{
	fast;
	int test=1;
	cin>>test;
	while(test--)
    {
		int n;
		cin>>n;
		int a[n+1];
		for(int i = 1;i<=n;i++)
        {
            a[i] = i;
        }
        for(int i = 1;i<n;i+=2)
            swap(a[i],a[i+1]);
        if(n%2 !=0)
            swap(a[n],a[n-1]);
       for(int i = 1;i<=n;i++) cout<<a[i]<<" ";cout<<endl;
    }
	return 0;

}
