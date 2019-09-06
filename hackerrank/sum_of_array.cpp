#include<iostream>
#include<vector>
using namespace std;
int main()
{
 int n,i,elements,sum=0;;
 cin >> n;
 vector<int> numbers;
   
 for(i=0;i<n;i++)
 {
   cin >> elements;
   numbers.push_back(elements);
 }

for(i=0;i<n;i++)
{
 sum += numbers.at(i);
}
cout << sum;


return 0;
}
