//2016742039 정정현
#include<iostream>
#include<cstdlib>
#include<algorithm>
#include"MyIntVector.h"
using namespace std;
int main()
{
    MyIntVector ex1;
    cout << "----MyIntVector test #1----\n" << "Copy constructor test\n\n";
    for (int i = 1; i < 6; i++) {
        ex1.push_back(i);
    }
    cout << "MyIntVector ex1 의 data는 ";
    for (size_t i = 0; i < ex1.size(); i++) {
        cout << ex1[i] << " ";
    }
    cout << "\n";
    MyIntVector ex2(ex1);

    cout << "MyIntVector ex2(ex1)후 ex2 의 data는 ";
    for (size_t i = 0; i < ex2.size(); i++) {
        cout << ex2[i] << " ";
    }
    //-----------------------------------------------------------------------------------------------------------
    cout << "\n\n";
    cout << "----MyIntVector test #2----\n" << "Assignment operator (=) test\n\n";

    MyIntVector ex3, ex4;
    for (int i = 1; i < 6; i++) {
        ex3.push_back(i);
    }
    for (int i = 3; i < 16; i += 3) {
        ex4.push_back(i);
    }
    cout << "MyIntVector ex3 의 data는 ";
    for (size_t i = 0; i < ex3.size(); i++) {
        cout << ex3[i] << " ";
    }
    cout << "\n";
    cout << "MyIntVector ex4 의 data는 ";
    for (size_t i = 0; i < ex4.size(); i++) {
        cout << ex4[i] << " ";
    }
    cout << "\n";

    ex3 = ex4;

    cout << "ex3=ex4 코드 후 ex3 의 결과는 ";
    for (size_t i = 0; i < ex3.size(); i++) {
        cout << ex3[i] << " ";
    }
    cout << "\n";
    ex1 = ex2 = ex3;
    cout << "chaining assignment test : ex1=ex2=ex3 의 결과는\n";
    cout << "MyIntVector ex2의 data ";
    for (size_t i = 0; i < ex2.size(); i++) {
        cout << ex2[i] << " ";
    }
    cout << "\n";
    cout << "MyIntVector ex1의 data ";
    for (size_t i = 0; i < ex1.size(); i++) {
        cout << ex1[i] << " ";
    }
    //-----------------------------------------------------------------------------------------------------------
    cout << "\n\n";
    cout << "----MyIntVector test #3----\n" << "( += ) operator test\n\n";

    MyIntVector ex5, ex6;
    for (int i = 1; i < 6; i++) {
        ex5.push_back(i);
    }
    for (int i = 1; i < 14; i += 3) {
        ex6.push_back(i);
    }
    cout << "MyIntVector ex5 의 data는 ";
    for (size_t i = 0; i < ex5.size(); i++) {
        cout << ex5[i] << " ";
    }
    cout << "\n";
    cout << "MyIntVector ex6 의 data는 ";
    for (size_t i = 0; i < ex6.size(); i++) {
        cout << ex6[i] << " ";
    }
    cout << "\n";

    ex5 += ex6;

    cout << "ex5 += ex6 코드 후 ex5 의 결과는 ";
    for (size_t i = 0; i < ex5.size(); i++) {
        cout << ex5[i] << " ";
    }
    //-----------------------------------------------------------------------------------------------------------
    cout << "\n\n";
    cout << "----MyIntVector test #4----\n" << "[ ] operator test\n\n";
    MyIntVector ex7;
    for (int i = 1; i < 6; i++) {
        ex7.push_back(i);
    }
    cout << "MyIntVector ex7 의 data는 ";
    for (size_t i = 0; i < ex7.size(); i++) {
        cout << ex7[i] << " ";
    }
    cout << "\n";
    cout << "ex7[0], ex7[2], ex7[4]의 결과는 " << ex7[0] << " " << ex7[2] << " " << ex7[4];

    //-----------------------------------------------------------------------------------------------------------
    cout << "\n\n";
    cout << "----MyIntVector test #5----\n" << "( + ) operator test\n\n";
    MyIntVector ex8, ex9, ans1;
    for (int i = 1; i < 6; i++) {
        ex8.push_back(i);
    }
    for (int i = 1; i < 14; i += 3) {
        ex9.push_back(i);
    }
    cout << "MyIntVector ex8 의 data는 ";
    for (size_t i = 0; i < ex8.size(); i++) {
        cout << ex8[i] << " ";
    }
    cout << "\n";
    cout << "MyIntVector ex9 의 data는 ";
    for (size_t i = 0; i < ex9.size(); i++) {
        cout << ex9[i] << " ";
    }
    cout << "\n";

    ans1 = ex8 + ex9;

    cout << "ans1 = ex8 + ex9 후 ans1 의 data는 ";
    for (size_t i = 0; i < ans1.size(); i++) {
        cout << ans1[i] << " ";
    }
    //-----------------------------------------------------------------------------------------------------------
    cout << "\n\n";
    cout << "----MyIntVector test #6----\n" << "binary( - ) operator test\n\n";
    MyIntVector ex10, ex11, ans2;
    for (int i = 1; i < 6; i++) {
        ex10.push_back(i);
    }
    for (int i = 5; i > 0; i--) {
        ex11.push_back(i);
    }
    cout << "MyIntVector ex10 의 data는 ";
    for (size_t i = 0; i < ex10.size(); i++) {
        cout << ex10[i] << " ";
    }
    cout << "\n";
    cout << "MyIntVector ex11 의 data는 ";
    for (size_t i = 0; i < ex11.size(); i++) {
        cout << ex11[i] << " ";
    }
    cout << "\n";

    ans2 = ex10 - ex11;

    cout << "ans2 = ex10 - ex11 후 ans2 의 data는 ";
    for (size_t i = 0; i < ans2.size(); i++) {
        cout << ans2[i] << " ";
    }
    //-----------------------------------------------------------------------------------------------------------
    cout << "\n\n";
    cout << "----MyIntVector test #7----\n" << "unary( - ) operator test\n\n";
    MyIntVector ex12, ex13;
    for (int i = 2; i < 11; i += 2) {
        ex12.push_back(i);
    }
    cout << "MyIntVector ex12 의 data는 ";
    for (size_t i = 0; i < ex12.size(); i++) {
        cout << ex12[i] << " ";
    }
    cout << "\n";
    ex13 = -ex12;

    cout << "ex13 = -ex12 후 ex13 의 data는 ";
    for (size_t i = 0; i < ex13.size(); i++) {
        cout << ex13[i] << " ";
    }
    //-----------------------------------------------------------------------------------------------------------
    cout << "\n\n";
    cout << "----MyIntVector test #8----\n" << "( * ) operator test\n\n";
    MyIntVector ex14, ex15;
    int ans3;
    for (int i = 1; i < 6; i++) {
        ex14.push_back(i);
    }
    for (int i = 5; i > 0; i--) {
        ex15.push_back(i);
    }
    cout << "MyIntVector ex14 의 data는 ";
    for (size_t i = 0; i < ex14.size(); i++) {
        cout << ex14[i] << " ";
    }
    cout << "\n";
    cout << "MyIntVector ex15 의 data는 ";
    for (size_t i = 0; i < ex15.size(); i++) {
        cout << ex15[i] << " ";
    }
    cout << "\n";

    ans3 = ex14 * ex15;

    cout << "ans3 = ex14 * ex15 후 ans3 의 data는 " << ans3;
    //-----------------------------------------------------------------------------------------------------------
    cout << "\n\n";
    cout << "----MyIntVector test #9----\n" << "( == ) operator test\n\n";
    MyIntVector ex16, ex17, ex18;
    for (int i = 1; i < 6; i++) {
        ex16.push_back(i);
    }
    for (int i = 5; i > 0; i--) {
        ex17.push_back(i);
    }
    for (int i = 1; i < 6; i++) {
        ex18.push_back(i);
    }
    cout << "MyIntVector ex16 의 data는 ";
    for (size_t i = 0; i < ex16.size(); i++) {
        cout << ex16[i] << " ";
    }
    cout << "\n";
    cout << "MyIntVector ex17 의 data는 ";
    for (size_t i = 0; i < ex17.size(); i++) {
        cout << ex17[i] << " ";
    }
    cout << "\n";
    cout << "MyIntVector ex18 의 data는 ";
    for (size_t i = 0; i < ex18.size(); i++) {
        cout << ex18[i] << " ";
    }
    cout << "\n";
    if (ex16 == ex17)
        cout << "ex16와 ex17의 값은 같다.\n";
    else
        cout << "ex16와 ex17의 값은 같지않다.\n";
    if (ex16 == ex18)
        cout << "ex16와 ex18의 값은 같다.\n";
    else
        cout << "ex16와 ex18의 값은 같지않다.\n";
    //-----------------------------------------------------------------------------------------------------------
    cout << "\n\n";
    cout << "----MyIntVector test #10----\n" << "(  ) operator test\n\n";
    MyIntVector ex19;
    for (int i = 1; i < 7; i++) {
        ex19.push_back(i);
    }
    cout << "MyIntVector ex19 의 data는 ";
    for (size_t i = 0; i < ex19.size(); i++) {
        cout << ex19[i] << " ";
    }
    cout << "\n";
    ex19(4);
    cout << "ex19(4) 후 ex19 의 data는 ";
    for (size_t i = 0; i < ex19.size(); i++) {
        cout << ex19[i] << " ";
    }
    //-----------------------------------------------------------------------------------------------------------
    cout << "\n\n";
    cout << "----MyIntVector test #11----\n" << "pop_back function test\n\n";
    MyIntVector ex20;
    for (int i = 1; i < 10; i++) {
        ex20.push_back(i);
    }
    cout << "MyIntVector ex20 의 data는 ";
    for (size_t i = 0; i < ex20.size(); i++) {
        cout << ex20[i] << " ";
    }
    cout << "\n";
    ex20.pop_back();
    ex20.pop_back();
    ex20.pop_back();
    cout << "ex20.pop_back() 3번 실행 후 ex20 의 data는 ";
    for (size_t i = 0; i < ex20.size(); i++) {
        cout << ex20[i] << " ";
    }
    //-----------------------------------------------------------------------------------------------------------
    cout << "\n\n";
    cout << "----MyIntVector test #12----\n" << "push_back function test\n\n";
    MyIntVector ex21;
    ex21.push_back(10);
    cout << "MyIntVector ex21 의 data는 " << ex21[0] << "\n";

    ex21.push_back(20);
    ex21.push_back(16);
    ex21.push_back(74);

    cout << "ex21.push_back(20), ex21.push_back(16), ex21.push_back(74) 후 ex21 의 data는 ";
    for (size_t i = 0; i < ex21.size(); i++) {
        cout << ex21[i] << " ";
    }
    //-----------------------------------------------------------------------------------------------------------
    cout << "\n\n";
    cout << "----MyIntVector test #13----\n" << "capacity, size, clear, is_empty, reserve function test\n\n";
    MyIntVector ex22;
    for (int i = 1; i < 15; i++) {
        ex22.push_back(i);
    }
    cout << "MyIntVector ex22 의 data는 ";
    for (size_t i = 0; i < ex22.size(); i++) {
        cout << ex22[i] << " ";
    }
    cout << "\n";

    cout << "ex22의 capacity는 " << ex22.capacity() << "\n";
    cout << "ex22의 size는 " << ex22.size() << "\n";

    ex22.clear();

    cout << "\nex22.clear() 후 vector의 상태\n";
    if (ex22.is_empty()) {
        cout << "vector가 비어있습니다.\n";
        cout << "ex22의 capacity는 " << ex22.capacity() << "\n";
        cout << "ex22의 size는 " << ex22.size() << "\n\n";
    }
    else {
        cout << "vector가 비어있지 않습니다.\n";
        cout << "ex22의 capacity는 " << ex22.capacity() << "\n";
        cout << "ex22의 size는 " << ex22.size() << "\n\n";
    }
    ex22.reserve(3);
    cout << "ex22.reserve(3); 구문 실행 후 ex22의 cap ";
    cout << ex22.capacity() << "\n\n";
    cout << "-----------test 코드 종료-----------";


    return 0;
}