#include <iostream>
using namespace std;
int main() {
    
    long long ISBN;
    //為了使陣列索引和每一位數一致，所以多宣告一個陣列空間
    long long digitalISBN[11];
    cout << "請輸入十位數";
    cin >> ISBN;
    //ISBN = ISBN%10;
    //Get each digital
    for (int i=10; i>=1; i--){
        digitalISBN[i] = ISBN % 10;
        cout << digitalISBN[i] << "\n";
        ISBN=ISBN/10;
    }
    //Check if the order of digital correct
    for (int i=1; i<=10; i++){
        cout << digitalISBN[i] << "\n";
    }

    //計算檢查碼
    int checkNumber=0;
    for (int i=1; i<=9; i++){
        digitalISBN[i]=digitalISBN[i]*i;
        checkNumber=checkNumber+digitalISBN[i];
    }
    checkNumber = checkNumber % 11;
    cout << checkNumber << "\n";

    if (checkNumber==digitalISBN[10])
        cout << "yes";
    else
        cout << "no";
}
