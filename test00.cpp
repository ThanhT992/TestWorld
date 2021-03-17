#include <iostream>
#include <string>
using namespace std;
    //edit code...
struct HocSinh
{
    int mhs;
    string hoten;
    double toan;
    double van;
    double dtb;
};

void Khaibao(HocSinh &hs, int k)
{   
    cout << "   Thong tin hoc sinh " << k+1 << " :" << endl;
    cout << " Ma hoc sinh: "; cin >> hs.mhs;
    cout << " Ho ten hoc sinh: "; getline(cin, hs.hoten);
    cout << " Diem mon toan: "; cin >> hs.toan;
    cout << " Diem mon van: "; cin >> hs.van;
}

int main()
{
    struct HocSinh hs[2];
    int t=0;
    
    for (int i=0; i < 2; i++)
    Khaibao(hs[i],i);
    for (int i=0; i < 2; i++) hs[i].dtb = (hs[i].toan + hs[i].van)/2;
    if (hs[0].dtb < hs[1].dtb) t = 1;
    
    cout << "  Thong tin cua hoc sinh co diem trung binh cao hon: " << endl;
    cout << hs[t].mhs << " " << hs[t].hoten << " " << hs[t].toan << " " << hs[t].van << " " << hs[t].dtb;

    return 0;
}
