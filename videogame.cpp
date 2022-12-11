#include <iostream>
using namespace std;

int main() {
	int N, H, input, selector, hasbox;
	cin >> N >> H;
	int finalarrangement[a];
	for(int i = 0 ; i < N; i++)
	{
	    cin >> c[i];
	}
	selector = 0;
	hasbox = 0;
	while(d != 0)
	{
	    cin >> input;
	    if((input == 1) && (selector != 0))
	    {
	        selector = selector - 1;
	    }
	    if((input == 2) && (selector != (a - 1)))
	    {
	        selector = selector + 1;
	    }
	    if((input == 3) && (hasbox = 0) && (finalarrangement[selector] != 0))
	    {
	        finalarrangement[selector] = finalarrangement[selector] - 1;
	        hasbox = 1;
	    }
	    if((input == 4) && (hasbox = 1) && (finalarrangement[selector] < b))
	    {
	        finalarrangement[selector] = finalarrangement[selector] + 1;
	        hasbox = 0;
	    }
	}
	for(int j = 0; j < a; j++)
	{
	    cout << finalarrangement[j] << " ";
	}
	return 0;
}
