#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        int val=row;
        while(col<=row){
            cout<<val;
            val++;
            col++;
        }
        cout<<endl;
        row++;
    }
}
// Other way
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int i = 1;
//     while (i <= n)
//     {
//         int j = 0;
//         while (j < i)
//         {
//             cout << i + j << ' ';
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
// }