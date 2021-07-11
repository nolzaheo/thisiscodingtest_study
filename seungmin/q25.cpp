#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Fail
{
public:
    int stageNum;
    double rate;
    Fail(int stageNum, double rate)
    {
        this->stageNum = stageNum;
        this->rate = rate;
    }

    bool operator <(Fail& other) {
        if (this->rate == other.rate)
            return this->stageNum < other.stageNum;
        return this->rate > other.rate;
    }
};

vector<int> solution(int N, vector<int> stages) {
    vector<Fail> order;
    vector<int> answer;

    int div = stages.size();
    for (int i = 1; i <= N; i++)
    {
        int cnt = count(stages.begin(), stages.end(), i);
        double rate = 0;
        if (div >= 1)
            rate = (double)cnt / div;

        order.push_back(Fail(i, rate));

        div -= cnt;
    }

    sort(order.begin(), order.end());

    for (int i = 0; i < order.size(); i++)
        answer.push_back(order[i].stageNum);

    return answer;
}