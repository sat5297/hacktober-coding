#include <iostream>
using namespace std;
int findlargest(int a, int b, int c){
   int largest = (a>b) ? ((a>c) ? a : c) : ((b>c) ? b : c);
   return largest;
}
int main() {
   int a, b, c;
   cin>>a>>b>>c;
   cout<<"The largest element is "<<findlargest(a, b,c);
   return 0;
}
