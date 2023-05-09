#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "rows";
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col=n;
        while(col>=row){
            cout<<n-col+1<<" ";
            col=col-1;
        }
        cout<<endl;
        row=row+1;
    }
}