#include <iostream>

using namespace std;
class duration
{
    int hr,mn,sc;
    public:
        duration();
        duration(int, int, int);
        void fnSetDuration();
        void fnShowDuration();
        duration fnAddDuration(duration);

};
duration::duration()
{
    hr=0;
    mn=0;
    sc=0;
}
duration::duration(int h,int m,int s)
{
    hr=h;
    mn=m;
    sc=s;
}
void duration::fnSetDuration()
{
     int h,m,s;
     cout << "\nEnter the duration : ";
     cin >> h >> m >> s;
     if(m<60 && s<60)
     {
            hr = h;
            mn = m;
            sc = s;
     }
     else
        cout << "\nInvalid Input\n";
}
void duration::fnShowDuration()
{
      cout << hr << ":"<< mn << ":"<< sc << endl;
}
duration duration::fnAddDuration(duration d2)
{
     duration d3;
     int hh, mm, ss;
     ss = sc + d2.sc;
     mm = mn + d2.mn + (ss/60);
     hh = hr + d2.hr + (mm/60);
     d3.sc = ss % 60;
     d3.mn = mm % 60;
     d3.hr = hh;
     return d3;
}
int main()
{
    duration d1,d2,d3;
    d1.fnSetDuration();
    d2.fnSetDuration();
    d3=d1.fnAddDuration(d2);
    cout<<"\nDuration 1\n";
    d1.fnShowDuration();
    cout<<"\nDuration 2\n";
    d2.fnShowDuration();
    cout<<"\nSum ofDuration\n";
    d3.fnShowDuration();
    return 0;
}
