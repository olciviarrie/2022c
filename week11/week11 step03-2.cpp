///week11 step03-2

#include <vector>///vector<???> STL�\��
#include <iostream>///cin or cout
using namespace std;
int main()
{
    vector<int> v;///v�Ovector�̭���int
    ///�S���n�h�j,�ҥHv��0��
    v.push_back(10);///��10��i�h,v��1��
    v.push_back(11);///��11��i�h,v��2��
    v.push_back(15);///��13��i�h,v��3��

    vector<int>::iterator it;
              ///���N�l,�j��|�Ψ쪺i

    for(it=v.begin() ; it!=v.end() ; it++)///for(int i=0;i<3;i++)
    {
        cout << *it << endl;///cout << v[i] << endl
    }
}

