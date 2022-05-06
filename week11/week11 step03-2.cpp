///week11 step03-2

#include <vector>///vector<???> STL功能
#include <iostream>///cin or cout
using namespace std;
int main()
{
    vector<int> v;///v是vector裡面裝int
    ///沒說要多大,所以v有0個
    v.push_back(10);///把10放進去,v有1個
    v.push_back(11);///把11放進去,v有2個
    v.push_back(15);///把13放進去,v有3個

    vector<int>::iterator it;
              ///迭代子,迴圈會用到的i

    for(it=v.begin() ; it!=v.end() ; it++)///for(int i=0;i<3;i++)
    {
        cout << *it << endl;///cout << v[i] << endl
    }
}

