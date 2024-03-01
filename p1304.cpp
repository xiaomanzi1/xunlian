#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1000005;
int is_prime[MAXN]; // 存储素数
vector<int> primes; // 存储素数列表
void get_primes(int n)
{
    memset(is_prime, 0, sizeof(is_prime));
    for (int i = 2; i <= n; i++)
    {
        if (!is_prime[i])
        {
            primes.push_back(i);
            for (int j = i + i; j <= n; j += i)
            {
                is_prime[j] = 1;
            }
        }
    }
}

bool is_goldbach_conjecture(int n)
{
    for (int i = 0; i < primes.size(); i++)
    {
        int p = primes[i];
        int q = n - p;
        if (q <= 0)
            break;
        if (!is_prime[q])
        {
            // 找到了两个质数，满足哥德巴赫猜想
            return true;
        }
    }
    // 没有找到满足哥德巴赫猜想的两个质数
    return false;
}

int main()
{
    int n;
    cin >> n;

    get_primes(n);

    for (int i = 4; i <= n; i += 2)
    {
        if (!is_goldbach_conjecture(i))
        {
            cout << "不满足哥德巴赫猜想: " << i << endl;
        }
    }

    return 0;
}