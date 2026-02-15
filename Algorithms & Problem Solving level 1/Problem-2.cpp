#include <iostream>
#include <string>
using namespace std;

enum enNumberOfMonth
{
    Jan = 1, Feb = 2, Mar = 3, Apr = 4, May = 5, Jun = 6,
    Jul = 7, Aug = 8, Sep = 9, Oct = 10, Nov = 11, Dec = 12
};

int ReadNumber()
{
    int Number;
    cout << "Please Enter A Number From 1 To 12: ";
    cin >> Number;
    return Number;
}

// قمنا بتغيير نوع الإرجاع من int إلى string
string GetMonthName(enNumberOfMonth Month)
{
    switch (Month)
    {
    case enNumberOfMonth::Jan: // استخدمنا النقطتين : بدل الفاصلة المنقوطة ;
        return "January";
    case enNumberOfMonth::Feb:
        return "February";
    case enNumberOfMonth::Mar:
        return "March";
    case enNumberOfMonth::Apr:
        return "April";
    case enNumberOfMonth::May:
        return "May";
    case enNumberOfMonth::Jun:
        return "June";
    case enNumberOfMonth::Jul:
        return "July";
    case enNumberOfMonth::Aug:
        return "August";
    case enNumberOfMonth::Sep:
        return "September";
    case enNumberOfMonth::Oct:
        return "October";
    case enNumberOfMonth::Nov:
        return "November";
    case enNumberOfMonth::Dec:
        return "December";
    default:
        return "Wrong Number.";
    }
}

int main() {
    int Number = ReadNumber();
    
    // قمنا بتحويل الرقم (int) إلى النوع (enum) لكي تقبله الدالة
    cout << "The Month is: " << GetMonthName((enNumberOfMonth)Number) << endl;

    return 0;
}