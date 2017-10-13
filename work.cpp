#include <algorithm>
#include <cmath>
#include <iostream>
#include <random>
#include <string>
#include <vector>

template<class T>
std::vector<T> generate_random_vector(std::size_t num, T min = -10, T max = 10)
{
	std::random_device rd;
 	std::mt19937 e2(rd());
	std::uniform_real_distribution<> dist(min, max);

	auto lambda = [&e2, &dist]() -> T { return dist(e2); };

	std::vector<T> result(num);
	std::generate_n(result.begin(), num, lambda);
	return result;
}

using namespace std;

int main()
{    
    cout << "Enter the number of elements" << endl;
    int n = 0;
    cin >> n;
    if (n <= 0)
    {
        cout << "error" << endl;
    }
    else
    {
        vector<int> v = generate_random_vector<int>(n, -10, 10);
        for (int i = 0; i < n; ++i)
    		{
            cout << v[i] << endl;
        }
        for (int i = 0; i < n; ++i) 
        {
            for (int j = 0; j < n - 1 - i; ++j) 
            {
                if (v[j] > v[j + 1]) 
                {
                    int dub = v[j];
                    v[j] = v[j + 1];
                    v[j + 1] = dub;
                }
            }
        cout << "________________" << endl;
        for (int i = 0; i < n; ++i)
        {
            cout << v[i] << endl;
        }
        }
    cout << "________________" << endl;
    vector<int> p = generate_random_vector<int>(10, -10, 10);
    for (int i = 0; i < 10; ++i)
    {
        cout << p[i] << endl;
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n - 1 - i; ++j)
        {
            if (p[j] > p[j + 1])
            {
                int dub = p[j];
                p[j] = p[j + 1];
                p[j + 1] = dub;
            }
        }
		}
    for (int i = 0; i < n; ++i)
    {
        cout << v[i] << endl;
    }
    cout << "________________" << endl;
    for (int i = 0; i < n; ++i)
    {
        cout << p[i] << endl;
    }
    cout << "________________" << endl;
    vector<int> g;
    for (int i = 0; i < v.size(); ++i)
    {
        g.push_back(v[i]);
    }
    for (int i = 0; i < p.size(); ++i)
    {
        g.push_back(p[i]);
    }
    } 
    return 0;
}
