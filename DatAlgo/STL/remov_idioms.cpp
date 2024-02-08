#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
 vector<int> v{1,2,3,2,5,2,6,2,4,8};
 {

   const auto new_end(remove(begin(v),end(v),2));//removing multiple '2' values
  
   v.erase(new_end,end(v));//make vector shorter
 }

 for(auto i:v){
 cout<< i << ",";
 }
cout <<'\n';

{
	//predicate function returns true if odd number
 const auto odd([](int i){return i%2 !=0;});
 v.erase(remove_if(begin(v),end(v),odd),end(v));//feed it with predicate func
}
v.shrink_to_fit();

for(auto i :v){
cout<<i<<",";
}
cout << '\n';
}
