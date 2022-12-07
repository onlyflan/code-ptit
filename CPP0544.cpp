#include <bits/stdc++.h>
using namespace std;
#define PI 3.141592653589793238

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        double a, b, c, d, e, f;
        cin >> a >> b >> c >> d >> e >> f;
        double x, y, z;
        double s, r, res;
        x = sqrt((a - c) * (a - c) + (b - d) * (b - d));
        y = sqrt((a - e) * (a - e) + (b - f) * (b - f));
        z = sqrt((c - e) * (c - e) + (d - f) * (d - f));
        if (x + y <= z || x + z <= y || z + y <= x)
            cout << "INVALID" << endl;
        else
        {
            s = sqrt((x + y + z) * (x + y - z) * (y + z - x) * (z + x - y)) / 4;
            r = x * y * z / (4 * s);
            res = PI * r * r;
            cout << fixed << setprecision(3) << res << endl;
        }
    }
    return 0;
}