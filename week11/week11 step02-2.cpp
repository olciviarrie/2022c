///week11 step02-2

#include <iostream>
#include <vector>
using namespace std;
class student
{
public:
	char name[30];
	int grade;
};
int main()
{
	int n;
	cin >> n;//scanf("%d",n);
	vector<student> stu(n);///

	for(int i=0;i<n;i++)
	{
		cin >> stu[i].name >> stu[i].grade;
	}///cin >> name[i] >> grade[i]///你的資料,往右流到變數裡

	for(int  i=0;i<n;i++)
	{
		cout << stu[i].name << " " << stu[i].grade << endl;
	} ///cout << name[i] << endl
}
