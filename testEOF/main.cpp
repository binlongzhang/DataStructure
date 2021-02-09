//简单测试EOF的用法和效果

#include <iostream>

using namespace std;

int main()
{
    char ch;
    int count = 0;
    while(cin.get(ch)){
        cout<<ch;
        count++;
    }
    cout <<endl<<count<<" characters read！"<<endl;
    return 0;
}
