# C++ 教學 講義
## 基本程式碼
```cpp
#include <iostream>
using namespacestd;
int main(int argc, char const *argv[])
{
    return 0;
}
```



### description:
```cpp
#include <(header name)>
```
1. #include <iostream>：告知compiler（編譯器）需要用到名為iostream的header（標頭）
2. include 須寫在最頂
3. include 多個header須一行一行寫
```cpp
using namespace std;
```

```cpp
int main(int argc, char const *argv[])
{
    return 0;
}
```
1. 每個C++程式一定有main函式；*int*表示回傳的值為int型態，main回傳0表示程式順利執行且結束，而其他main()回傳非零的數字則由compiler做定義
2. 以下為最小的CPP函式
```cpp
int main(){
    return 0;
}
```
3. 為CPP 中把函式和函式做分割的符號
4. 雙斜線//為單行註解
5. /* */為多行註解
（//可override/**/）


---