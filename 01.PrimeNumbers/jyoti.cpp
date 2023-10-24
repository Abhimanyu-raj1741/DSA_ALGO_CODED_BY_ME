#include<bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
    string w;

    cin>>w;

    int n = w.length();

    int sum=0;

    for(int i=1 ; i<=n ; i++){

        if(i!=1 && i!= n){

            sum++;

        }

    }

    if(n>10){

      cout<<w[0]<<sum<<w[n-1]<<endl;

    }else{

        cout<<w<<endl;

    }

}

    




	return 0;
}