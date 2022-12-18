#include <iostream>
#include <algorithm>

using namespace std;

bool cmp(int a, int b);

int main()
{   
    int n = 8;
    int  a[] = {9,5,17,6,3,29,1,12};
    sort(a[0], a[7], cmp);
    
    return 0;
}
bool cmp(int a, int b){
    if(a < b){
        return 1;
    }
    return 0;
}
