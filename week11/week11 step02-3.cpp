///week11 step02-3

#include <iostream>
#include <vector>
#include <algorithm>///「資料結構演算法」的演算法
using namespace std;
class Student{
public:
	char name[30];
	int grade;
};
bool compare( Student a, Student b )
{
	return a.grade > b.grade;
}
int main()
{
	int n;
	cin >> n;
	vector<Student> stu(n);

	for(int i=0;i<n;i++)
	{
		cin >> stu[i].name >> stu[i].grade;
	}

	stable_sort( stu.begin(), stu.end(), compare );

	for(int  i=0;i<n;i++)
	{
		cout << stu[i].name << " " << stu[i].grade << endl;
	}
}
