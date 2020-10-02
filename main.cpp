#include <iostream>

using namespace std;

int main() {
    char a;
    int b;
    short c;
    float d;
    double e;
    long f;

    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    cin>>e;
    cin>>f;
    cout<<sizeof(a);
    cout<<sizeof(b);
    cout<<sizeof(c);
    cout<<sizeof(d);
    cout<<sizeof(e);
    cout<<sizeof(f);

    return 0;
}