#include<iostream>
using namespace std;
//三分查找
const double EPS = 1e-3;
double calc(double x)
{
    // f(x) = -(x-3)^2 + 2;
    return -(x - 3.0) * (x - 3.0) + 2;
}
//递归
double c(double low, double high)
{
    double mid, midmid;
    mid = (low + high) / 2;
    midmid = (mid + high) / 2;
    double a = calc(mid);
    double b = calc(midmid);
    if (midmid - mid > EPS)
    {
        if (a < b)
        {
            return c(mid+1e-5, high);
        }
        else if (a > b)
        {
            return c(low, midmid-1e-5);
        }
    }
        return (mid + midmid) / 2;
}
//循环
double ternarySearch(double low, double high)
{
    double mid, midmid;
    while (low + EPS < high)
    {
        mid = (low + high) / 2;
        midmid = (mid + high) / 2;
        double mid_value = calc(mid);
        double midmid_value = calc(midmid);
        if (mid_value > midmid_value)
            high = midmid-1e-5;
        else
            low = mid+1e-5;
    }
    return low;
}
int main()
{
    cout<<c(0, 6)<<endl;
}