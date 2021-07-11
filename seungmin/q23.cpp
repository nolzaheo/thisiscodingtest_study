#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Student {
public:
	string name;
	int language;
	int english;
	int math;
	Student(string name, int language, int english, int math) {
		this->name = name;
		this->language = language;
		this->english = english;
		this->math = math;
	};

	bool operator <(Student& other) {
		if (this->language == other.language && this->english == other.english && this->math == other.math)
			return this->name < other.name;
		if (this->language == other.language && this->english == other.english)
			return this->math > other.math;
		if (this->language == other.language)
			return this->english < other.english;
		return this->language > other.language;
	}
};

int main(void)
{
	int N;
	cin >> N;
	vector<Student> v;

	for (int i = 0; i < N; i++)
	{
		string name;
		int lan, eng, mat;
		cin >> name >> lan >> eng >> mat;
		v.push_back(Student(name, lan, eng, mat));
	}
	
	sort(v.begin(), v.end());

	for (int i = 0; i < N; i++)
		cout << v[i].name << endl;
}
