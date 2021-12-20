#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout << "Enter the initial video's duration" << endl;
    int m,s;
    char c;
    cin >> m >> c >> s;
    cout << "Enter the  video's duration you want to get" << endl;
    int m2,s2;
    cin >> m2 >> c >> s2;
    float k1,k2;
    k1 = (m*60)+s;
    k2 = (m2*60)+s2;

    cout << "To reach that duration, you should speed up the video to " << double((k1*100)/k2) << "%" << endl;
    cout << " ====>>> " << double((k1*100)/k2) << "%" << " <<<====";
    cout << endl << endl;
    return 0;
}
