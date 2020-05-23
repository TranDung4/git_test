#include <iostream>
//9.3
using namespace std;

class SOPHUC
{
    float thuc,ao;
public:
    SOPHUC()
    {
        thuc=0;
        ao=0;
    }
    SOPHUC operator+(SOPHUC y)
    {
        SOPHUC z;
        z.thuc= thuc+y.thuc;
        z.ao= ao+y.ao;
        return z;
    }
    SOPHUC operator-(SOPHUC y)
    {
        SOPHUC z;
        z.thuc= thuc-y.thuc;
        z.ao= ao-y.ao;
        return z;
    }
    friend ostream& operator<<(ostream& out, SOPHUC& k)
    {
        out<<k.thuc<<"+("<<k.ao<<")*i"<<endl;
        return out;
    }
    friend istream& operator>>(istream& in,SOPHUC& k)
    {
        cout<<"+) Nhap phan thuc: ";
        in>>k.thuc;
        cout<<"+) Nhap phan ao: ";
        in>>k.ao;
        return in;
    }
};

int main()
{
    SOPHUC a,b,tam;
    cin>>a;
    cout<<"--> So phuc thu nhat la: ";cout<<a;
    cin>>b;
    cout<<"--> So phuc thu hai la: ";cout<<b;
    tam=a-b;
    cout<<"--> Hieu 2 so phuc la: ";cout<<tam;
    tam=a+b;
    cout<<"--> Tong 2 so phuc la: ";cout<<tam;
    return 0000;
    //yeu me
}
