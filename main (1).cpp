#include <iostream>
using namespace std;

int main()
{
    int n,m = 0;
    cin >> n >> m;
    while(n<=m){
    cout << n << "*" << n << "=" << n * n << endl;
    n++;
    }
}