#include <iostream>

using namespace std;

int main()
{
    //int Ages = 0;
    //int Num1 = 0;
    //int Num2 = 0;

    //cin >> Num1;
    //cin >> Num2;

    //cout << "The result is" <<endl;
    //cout << Num1 % Num2;

    int En = 0;
    int Ko = 0;
    int Ma = 0;

    cout << "영어 점수를 입력하시오. ?" << endl;
    cin >> En;
    cout << "국어 점수를 입력하시오. ?" << endl;
    cin >> Ko;
    cout << "수학 점수를 입력하시오. ?" << endl;
    cin >> Ma;
    
    int Sum = En + Ko + Ma;
    float Avg = static_cast<float>(Sum) / 3.0f;

    cout << "총점 = " << Sum << endl;
    cout << "평균점 = " << Avg << " 입니다.";

     


    return 0;
}