# Data_Structure_1
Data Structure 1 과제(STL의 vector 구현)
### C++ STL의 vector를 구현한 코드
# 1. constructor
MyIntVector가 선언될 때 초기화를 위해 작성한 Default constructor입니다. 초기에 cap값을 입력 받는 경우 입력 받은 값으로 cap을 초기화하지만 입력 받는 값이 없는 경우 default 값으로 초기화를 해줍니다.
# 2. copy constructor
MyIntVector를 deep copy하기 위해 작성한 copy constructor입니다. Parameter로 받은 MyIntVector의 data, cap, used를 그대로 복사하는 constructor입니다.
# 3. destructor
MyIntVector를 삭제하기 위한 destructor입니다. MyIntVector의 data를 삭제하고 used,cap을 0으로 지정해 vector를 삭제합니다.
# 4. assignment operator
우측에 입력되는 MyIntvector의 data들을 좌측으로 deep copy해주는 Assignment operator입니다. Vector의 data가 그대로 복사되는데, 만약 두 vector가 같은 vector이면 기존 vector를 반환합니다.
# 5. void reserve(size_t newCap);
입력받은 newCap로object의 cap을 증가시켜주는 member function입니다. Cap의 크기를 입력 받는 parameter 만큼 증가시켜주는 기능을 함으로 newCap은 양수여야 합니다. 주로 cap의 size를 변경해야 하는 +=operator, push_back() 에 사용됩니다.
# 6. int& operator[](const size_t elem);
입력 받는 elem번째의 object data를 reference 된 int type value로 반환해주는 [] operator입니다. Vector는 양수 값의 index만 갖음으로 elem은 항상 0보다 커야 하므로 내부 조건문으로 입력 받는 parameter가 음수인 경우 프로그램을 종료하도록 제한해 주었습니다. 또한 vector의 data가 없는 elem 번째 index에 접근하려고 할 때도 조건문을 통해 프로그램을 종료하도록 제한했습니다.
# 7. MyIntVector operator +(const MyIntVector& input);
Binary operator로 입력 받는 두 vector의 data개수가 같은 경우에 각 index끼리 더해서 vector를 반환하는 + operator입니다. 두 vector의 data 개수가 다른 경우 연산을 수행하지 않고 기존 vector를 반환하도록 코딩했습니다.
# 8. MyIntVector& operator -(const MyIntVector& input);
Binary operator로 입력 받는 두 vector의 data개수가 같은 경우에 각 index끼리 빼서 vector를 반환하는 - operator입니다. 두 vector의 data 개수가 다른 경우 연산을 수행하지 않고 기존 vector를 반환하도록 코딩했습니다.
# 9. int operator*(const MyIntVector& input);
Binary operator로 입력 받는 두 vector의 data개수가 같은 경우에 각 index끼리 곱하고 곱한 값들을 더해서 vector간의 내적 된 값을 int type value로 반환하는 * operator입니다. 두 vector의 data 개수가 다른 경우 연산을 수행하지 않고 기존 vector를 반환하도록 코딩했습니다.
# 10. MyIntVector& operator -();
Unary operator로 입력 받은 vector의 data들에 (-)를 곱해 부호를 바꿔주는 - operator입니다. Vector 가 비어 있는 경우 연산을 하지 않고 기존 vector를 반환하도록 하였고, Parameter를 따로 받지 않고 MyIntVector type으로 부호를 변경한 vector를 반환해주도록 코딩했습니다.
# 11. bool operator==(const MyIntVector& input);
Binary operator로 입력 받은 양쪽의 data들이 정확하게 같은 vector인지 판단하고 같은 경우 true 아닌 경우 false를 반환하는 == operator입니다. Cap의 크기는 vector의 같음을 판단하는데 필요한 값이 아니므로 cap이 다르고 나머지 data가 다 같다면 true를 반환하도록 코딩했습니다.
# 12. MyIntVector& operator()(int value);
입력 받는 int value로 vector의 모든 data를 변경해 주는 () operator입니다. Vector에 data가 없는 경우 함수를 동작하지 않도록 코딩했습니다.
# 13. void pop_back();
함수를 실행시킨 vector의 맨 뒤 data를 제거하는 member function입니다. Vector가 비어 있는 경우에도 실행이 되면 다른 member value에 영향을 줄 수 있음으로 vector가 비어 있는 경우 함수를 동작 시키지 않고 종료하도록 코딩했습니다.
# 14. void push_back(const int& x);
함수를 실행시킨 vector의 data 맨 뒤에 입력 받은 int x값을 추가해주는 member function입니다. 
# 15. size_t capacity() const;
함수를 실행시킨 vector의 cap을 반환해 주는 member function 입니다. Cap은 size_t value이므로 함수의 반환 값도 size_t로 해주었고 cap의 값을 변경하지 못하도록 const를 사용했습니다.
# 16. size_t size() const;
함수를 실행시킨 vector의 used를 반환해 주는 member function입니다. used은 size_t value이므로 함수의 반환 값도 size_t로 해주었고 used의 값을 변경하지 못하도록 const를 사용했습니다.
# 17. bool is_empty()const;
함수를 실행시킨 vector가 비어 있으면 true를 반환하고 data가 들어있어 비어 있지 않으면 false를 반환하는 member function입니다.
# 18. void clear();
함수를 실행시킨 vector의 모든 data를 삭제하는 member function입니다.
