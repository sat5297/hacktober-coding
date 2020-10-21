#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a[5][5];
    int x,y;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin>>a[i][j];
            if(a[i][j] == 1){
                x = i;
                y = j;
            }
        }
    }
    if ((x-2) < 0){
        x = (-1*(x-2)) + 2;
    }
    if ((y-2) < 0){
        y = (-1*(y-2)) + 2;
    }
    cout<<x-2+y-2;

    return 0;
}
