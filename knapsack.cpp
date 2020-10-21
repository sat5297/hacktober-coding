#include <iostream>
#include <algorithm>
#include <vector>

using std::vector;

bool find_greater(int a , int b)
{
    return a > b;
}

int knap(int W, vector<int> &w) 
{
    vector<vector<int> >vals(w.size() + 1 , vector<int>(W + 1 , 0));

    for (int i = 0; i <= w.size(); ++i)
    {
        for (int j = 0; j <= W; ++j)
        {
            if (i == 0 || j == 0)
                vals.at(i).at(j) = 0;
            else if (w[i - 1] <= j)
                vals.at(i).at(j) = std::max(vals.at(i - 1).at(j) , w[i - 1] + vals.at(i - 1).at(j - w[i - 1]));
            else
                vals.at(i).at(j) = vals.at(i - 1).at(j);
        }
    }
    return vals.at(w.size()).at(W);
}

int main() 
{
    int n, W;
    std::cin >> W >> n;
    vector<int> w(n);
    for (int i = 0; i < n; i++) 
    {
        std::cin >> w[i];
    }
    std::sort(w.begin() , w.end() , find_greater);
    std::cout << knap(W, w) << '\n';
}