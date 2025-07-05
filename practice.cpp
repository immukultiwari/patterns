//to print a floyds triangle pattern for character.
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of rows and column you want\n";
    cin>>n;
    char ch= 'A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
    return 0;
}
