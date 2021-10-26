#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define f0(n) for(int i=0;i<n;i++)
#define f1(n) for(int i=1;i<=n;i++)
#define mii map<int,int>
#define mci map<char,int>
#define V vector<int>
#define vp vector<pair<int,int>>
#define pb push_back
#define pp pair<int,int>
#define ff first
#define ss second
#define S set<int>
#define show2(a, b) cout<<a<<' '<<b<<endl;
#define show3(a, b, c) cout<<a<<' '<<b<<' '<<c<<endl;
#define mod 1000000007

int32_t main()
{   
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    string s,s1;
    cin>>s;
    cin>>s1;
    int ans=0;
    if(s1[0]==s[0]&&s1[0]=='1')
    {
      if(s[1]=='1')
      {
        ans++;
        s[1]='2';
      }
    }
    if(s1[0]!=s[0]&&s1[0]=='1')
    ans++;
     if(s1[n-1]==s[n-1]&&s1[n-1]=='1')
    {
      if(s[n-2]=='1')
      {
        ans++;
        s[n-2]='2';
      }
    }
    if(s1[n-1]!=s[n-1]&&s1[n-1]=='1')
    ans++;
    for(int i=1;i<n/2;i++)
    {
      if(s[i]!=s1[i]&&s1[i]=='1')
      ans++;
      if(s1[n-i-1]!=s[n-i-1]&&s1[n-i-1]=='1')
      ans++;
      if(s[i]>=1&&s1[i]=='1')
    {
      if(s[i+1]=='1')
      {
        ans++;
        s[i+1]='2';
      }
      else if(s[i-1]=='1')
      {
        ans++;
        s[i-1]='2';
      }
    }
      if(s[n-i-1]>=1&&s1[n-i-1]=='1')
    {
      if(s[n-i]=='1')
      {
        ans++;
        s[n-i]='2';
      }
      else if(s[n-i-2]=='1')
      {
        ans++;
        s[n-i-2]='2';
      }
    }
    }
    if(n%2)
     {
       if(s[n/2]==s1[n/2]&&s1[n/2]=='1')
       {
         if(s[n/2-1]=='1')
          {
        ans++;
        s[n/2-1]='2';
          }
        else if(s[n/2+1]=='1')
          {
        ans++;
        s[n/2+1]='2';
            }
        }
     else if(s[n/2]!=s1[n/2]&&s1[n/2]=='1')
     ans++;
     }
    
   cout<<ans<<endl; 
  }
  
  }




