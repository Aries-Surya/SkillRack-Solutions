#include <iostream>
#include <vector>

int main()
{
    std::vector<int> scores;
    int score;
    while (std::cin >> score)
    {
        scores.push_back(score);
    }

    int mid = scores.size() / 2;
    int pointA = 0, pointB = 0;
    for (int i = 0; i < mid; i++)
    {
        int scoreA = scores[i];
        int scoreB = scores[i + mid];

        if (scoreA > scoreB)
        {
            pointA += 3;
        }
        else if (scoreA == scoreB)
        {
            pointA += 1;
            pointB += 1;
        }
        else
            pointB += 3;
    }
    std::cout << pointA << " " << pointB;
}

