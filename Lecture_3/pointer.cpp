#include <iostream>
using namespace std;
class stack
{
private:
    int *arr = new int[5];
    int count = 0;

public:
    void push(int a)
    {
        arr[count] = a;
        count++;
    }
    void getter(void)
    {
        for (int i = 0; i < count; i++)
        {
            cout << arr[i] << endl;
        }
    }
    void pop(void)
    {
        count--;
        // return arr[count++];
    }
};
int main()
{
    stack s1;
    s1.push(4);
    s1.push(5);
    s1.push(3);
    s1.getter();
    s1.pop();
    s1.getter();
    return 0;
}