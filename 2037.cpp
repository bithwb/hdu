
#include <fstream>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

struct node
{
	int start,end;
};

bool cmp(const node &lhs,const node &rhs)
{
	if (lhs.start != rhs.start) return lhs.start<rhs.start;
	else
		return lhs.end<rhs.end;
}
void print(int a[],int len)
{
    for(int i=0;i<len;i++)
    {
        cout<<a[i]<<"-";
    }
    cout<<endl;
}
int main(void)
{
// 	ifstream cin("data.txt");
	int n;
	int dp[300];
	node tv[110];


	while(cin>>n&&n)
	{
		int endtime=0;
		memset(dp,0,sizeof(dp));
		for(int i=0;i<n;++i)
		{
			cin>>tv[i].start>>tv[i].end;
			endtime=max(endtime,tv[i].end);
		}
        cout<<"----------------------"<<endl;
		sort(tv,tv+n,cmp);
		for(int i=0;i<n;++i)
        {
            cout<<tv[i].start<<" "<<tv[i].end<<endl;

        }

		for(int i=0;i<n;++i)
		{
			if (dp[tv[i].start]+1>=dp[tv[i].end])
			{
				dp[tv[i].end]=dp[tv[i].start]+1;
				for (int j=tv[i].end;j<=endtime;++j)
				{
					dp[j]=max(dp[j],dp[tv[i].end]);
				}
			}
			print(dp,n);
		}

		cout<<dp[endtime]<<endl;
	}
	return 0;
}
