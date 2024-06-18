#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;
    cin.ignore();

    string top_batsman;
    int top_score = -1;

    for (int i = 0; i < N; ++i) {
        string batsman_data;
        getline(cin, batsman_data);

        size_t comma_pos = batsman_data.find(',');
        string name = batsman_data.substr(0, comma_pos);
        string score_str = batsman_data.substr(comma_pos + 1);

        int score = stoi(score_str);

        if (score > top_score) {
            top_score = score;
            top_batsman = name;
        }
    }

    cout << top_batsman << endl;

    return 0;
}
