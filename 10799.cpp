#include <iostream>
#include <cstdio>
#include <stack>
using namespace std;

int count, result;
class stk
{			
private:
	stack<int> st;
public:
	void compare(int& a)
	{
		if(a == 40)
		{
			st.push(a);
		}
		else if(a == 41)
		{
			if(st.top() == 42)
			{
				while(st.top() != 40)
				{
					st.pop();
					count++;
				}
				st.pop();
				for(int i = 0; i < count; i++)
				{
					st.push(42);
				}
				count++;
				result += count;
				
				count = 0;
			}
			else
			{
				st.pop();
				st.push(42);
			}
		}
	}
};
int main()
{
	stack<int> st;
	int a;
	freopen("input.txt","r",stdin);
	stk stk;	
	do
	{
		a = getchar(); 
		stk.compare(a);	
	}while(a != EOF);
	cout << result << endl;
}
