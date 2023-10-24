#include<bits/stdc++.h>

using namespace std;

int main()
{

    cout<<"Hello World"<<endl;
    vector<pair<int,int>> p={{1,10},{2,11},{3,12},{4,13}};
    for(auto i:p)
    	cout<<i.first<<" "<<i.second<<endl;
    
    set <int> hashset={1,2,3,7,10};
    auto it=hashset.find(3);
    cout<<*it<<"Index"endl;
	return 0;
}