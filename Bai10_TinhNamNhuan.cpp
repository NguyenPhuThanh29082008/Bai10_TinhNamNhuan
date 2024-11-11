// Bai10_TinhNamNhuan.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
bool isNamNhuan(int sonam);
int main() 
{
    int nam;
    cout << "Nhap nam de xac dinh nam nhuan hay khong nhuan: ";
    cin >> nam;
    if (isNamNhuan(nam))
    {
        cout << "Nham nhuan";
    }
    else
    {
        cout << "Nham khong nhuan";
    }
    return 0;
}

/// Ham dung de xac dinh nam nhuan hay ko
/// Neu nhuan = true
/// Neu khong nhuan = false

bool isNamNhuan(int sonam)
{
    if (sonam % 4 == 0 && sonam % 100 != 0 || sonam % 400 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
