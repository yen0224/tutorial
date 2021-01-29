---
tags: 置頂,released, cpp
---
<a rel="license" href="http://creativecommons.org/licenses/by-nc/3.0/tw/"><img alt="創用 CC 授權條款" style="border-width:0" src="https://i.creativecommons.org/l/by-nc/3.0/tw/88x31.png" /></a><br />本著作係採用<a rel="license" href="http://creativecommons.org/licenses/by-nc/3.0/tw/">創用 CC 姓名標示-非商業性 3.0 台灣 授權條款</a>授權.
在服用所有團隊內容前先看[這篇](/lwJ3tssyTpiFL8B3R8SUlw)，~~不然 @yen0224  會打你屁屁~~，不遵守請立即離開，凡已觀看其他內容則視為已同意申明內條款
# C++ 教學講義
課本解答參閱[程式範例解答](/J4UFI4rpR6i25jfOFxDGgQ/#C++)（目前編輯中進度約10%）
## 程式語言的發展
### 程式語言大致可以分成三種：機器語言、組合語言和高階語言
#### Machine Language 機器語言
A computer’s native language, which differs among different types of computers, is its machine language—a set of built-in primitive instructions. These instructions are in the form of binary code, so if you want to give a computer an instruction in its native language, you have to enter the instruction as binary code. For example, to add two numbers, you might have to write an instruction in binary code, as follows:
  1101101010011010
#### Assembly Language 組合語言
Assembly language uses a short descriptive word, known as a mnemonic, to represent each of the machine-language instructions. For example, the mnemonic add typically means to add num- bers and sub means to subtract numbers. To add the numbers 2 and 3 and get the result, you might write an instruction in assembly code like this:
```assembly=
add 2, 3, result
```
Assembly languages were developed to make programming easier. However, because the computer cannot execute assembly language, another program—called an assembler—is used to translate assembly-language programs into machine code

#### High-level Language 高階語言
![](https://i.imgur.com/UMVetV9.png)
#### C與Ｃ＋＋的不同：
C相較於Ｃ＋＋介於低階語言與高階語言間，較“貼近硬體的運作”，因此寫法較Ｃ＋＋對人而言比較生澀難懂；Ｃ＋＋則是赴著在Ｃ上的語言，Ｃ的header亦可用在Ｃ＋＋中，且Ｃ＋＋支援物件導向(object-oriented programming, OOP)，對人較好理解

## From Souce Codes To Executable Files
C series語言的source code在進行編碼至機器碼的執行檔(windows是.exe, Unix系統是.o)前，皆會進行*前處理，編譯，組譯，連結*四部份，而Ｃ++語言本身只含核心關鍵字，故我們在打c++ source code時，需同時去引入(#include)相關的標頭，使前處理器可正常的運行

![source code to executable file](https://i.imgur.com/hVNg9mg.gif)
* 預先處理：預先處理是在進行編譯前的準備工作，包括去抓取header內容、將#define出來的東西將數字與文字做替換（就是把所有出現的這個名字東西都換成數字啦），並組合成一個檔案
> 預先處理過程就是將#include、#define、#if、特殊符號等*取出需要的東西後去除，且與原檔同義*，只有常數、字符串、變數定義、以及Ｃ關鍵字等[name=yen0224]
* 編譯過程：在此階段中，編譯器會開始進行*語法的檢查及找出編譯路徑(優化)*，確認語法無誤後轉為組譯語言，接著組譯器開始再把由組譯語言轉換為機器語言，在輸出為目的檔。
* 連結：將上步驟中產生的目的檔將各種目標文件鏈結起來，將為定義標示符與其路徑做對應，最後產生一動態鏈結資料庫，或執行檔

### 前處理器
預處理器指示詞（例如 ==#define== 和 ==#ifdef== ）通常用來讓來源程式在不同的執行環境中變得更容易變更和編譯。 來源檔案中的指示詞會指示前處理器採取特定動作。 例如，前置處理器可以取代文字中的語彙基元、將其他檔案的內容插入原始程式檔，或是透過移除文字區段來隱藏編譯檔案的一部分。 在巨集展開之前，會辨識並執行前置處理器程式行。

目前學習階段用到的前處理器keyword有：
- #define: 用來宣告常數、亦可宣告簡易function（不嚴謹喔！！因無型別的定義）
```cpp=
//語法
#define 識別符 值
#define PI 3.14 //定義PI為常數3.14
#define multiply( a1 , a2 ) ( a1 * a2)//定義multiply()
```
- #undef：取消#define的作用
```cpp=
//語法
#undef 識別符
#undef PI
```
- #include：告知前處理器指定檔案的內容包含在指示詞的位置
```cpp=
//語法
#include <標頭檔名>
#include "路徑"
#include <iostream> //宣告引入“iostream”標頭
#include <algorithms>//宣告引入“algorithms”標頭
#include "usr/lib/head.h"//宣告引入head.h自訂標頭
```
- #if #elif #else：條件式
### 基本source code架構
```cpp=
#include <iostream>
using namespace std;
int main(/*int argc, char const *argv[]*/)
{
    return 0;
}
```

----

#### 第一部分  #include \<iostream>:
告訴前處理器，此source code會用到名為*iostream*的*headers*
- iostream 基本輸出入的標頭，包含ostream,istream
- \"headers":標頭，為相關的函數\"定義"的地方

----

#### 第二部分int main(int argc, char const \*argv[]){}
- main function，為c++程式的基礎，是整個函式的主體，當作業系統執行程式時，呼叫的即是main()
-  function 就跟數學中的函數一樣，是一個工作模組，並允許參數的輸入，並執行特定任務，最後輸出結果
- int表示*回傳值*為整數型態（return type is integer）
- 註解：註解分為兩種形式，*單行註解*與*多行註解*

* int argc, int argc, char const \*argv[]:此為main function的參數列(parameter list)
    * int argc為宣告編號
    * argc[0]為第一參數
    * argv[1]為第二參數
    * 「以此類推」
    * 若此程式不需要任何參數資料以檔案等獨立形式輸入則可用void或直接留空代替
```cpp=
int main(void){}
或
int main(){}
```
- 單行註解：以兩個斜線//作為開頭，此行的東西不會被編譯，也不會被輸出
```cpp=
//我是單行註解
```
- 多行註解：以斜線和乘號成對表之，內容一樣無效果
```cpp=
/*我是多行註解
 *（通常會加一個符號在前，其功能有二，一為對齊，二為告知在看的人此行為註解
 */  
```

----

#### 第三部分--大括號內的內容
括號內為函式的主要工作內容，return為回傳的關鍵字，在main函式中的return值較為特別，如同前面所說的“作業系統呼叫的是main函數”，同理main函數亦是回傳給作業系統直為電腦系統的，代表的是程式的執行狀態，0表示程式順利結束，其他非0零的值則由電腦做定義，*通常為錯誤碼*
:::spoiler
若為自訂函式，可回傳變數、字串、矩陣、運算式值或空值，一樣要記得宣告函式時要同時宣告回傳值型別
```cpp=
void hello(){
    cout<<"hello world";
}
int returnMAX(int a1,int a2){
    return (a1>a2)?a1:a2;
}
```
:::

----
### 記住2個名詞:關鍵字與識別字
* 關鍵字keyword：為啟用相關功能的字，可以解釋為“當這些字被打出來時，會有些預先定義的功能被發動”，根據微軟developer docs寫道“關鍵字是具有特別意義的預先定義保留識別項，他們無法當作程式中的識別字做使用”。
![](https://i.imgur.com/JNiFzEs.jpg)

* 識別字identifier：依程式需求自行定義的名稱，舉凡程式中所用的各種名稱都屬於識別字，標準程式庫、第三方程式庫中亦是。


## 基本輸出入
由於c\++可以說是由c語言「改良」後的新語言，故c語言的函式庫c\++皆可使用
（base on C.）

----
### C++輸出入
#### \<iostream> cout
cout函式，定義於iostream中，其功能和Ｃ語言中printf()相同，但使用法不同
```cpp=
//語法
cout<<變數1或字串<<變數2或字串<<...<<變數n或字串;
//example
cout<<"hello world";
//(同義)
cout<<"hello"<<" "<<"world";
//亦可與變數同時輸出
cout<<"After calculation, your BMI is"<<BMI;
```
1. \<<為左移運算子
2. 可輸出運算式的結果、變數值、文字
3. 在句尾加endl，有換行和排清匯流排{可使資料立即顯示於螢幕上}的效果
```cpp=
cout<<........<<endl;
```
----
### C輸出入
#### \<cstdio> printf()

```cpp=
printf( const char* format, ... );
```
- const char* format:填入輸出格式，後面填入參數
- 格式化方法：
:::spoiler
|參數 | 用途 |
| :------: | :------: |
| ％ | 格式化符|
|%%|輸出%符號|
| %d| 整數int|
|%f|浮點數float|
|%.nf|n為一數字，僅輸出到該位數|
|%s|字串(可省）|
:::

----

Example:
```cpp=
printf("abc");//輸出abc
printf("%d",10);//輸出10
printf("%d",a);//輸出（整數）變數a值
printf("%f",0.1234)//輸出0.123400（預設輸出6位）
printf("%.2f",0.1234)//輸出0.12
//多重參數
printf("今天的日期是：%d年%d月%d日，台幣兌美元匯率為%f\n",year, mounth, day, exchange);
```
*more info: https://en.cppreference.com/w/cpp/io/c/fprintf*

---


## 基本內建型態primitive built-in type
看完上面的解說，我們應該已經成功在電腦上輸出資料，但有兩個問題：我們要如何輸入東西到電腦？還有上面一直提到的「變數」是什麼呢？？

>變數在電腦中的定義就和他字面上的意義相同，為一可變的數，若結合計算機硬體的概念來看，即是將待用資料存入於記憶體的其一位址中，待需要使用時再將其呼叫此位址然後將值載入暫存器中，但因為位址很難記，打程式時Coders會利用一個標示符來代替他，以提高效率及程式碼的理解性。

我們已知，電腦的資源是有限的，故我們要依資料的不同類去分配不同型態的變數來儲存，例如人數一定是**整數**，重量可能帶有小數位，因此用**浮點數**較為適合
C和C++一樣皆有下列這些變數型態（型態最大的不同在於在記憶體內的空間）：

### 基本資料型態
| 資料型態 | 型態說明 | 位元數 |數值有效範圍|
| :------: | :------: | :------: |---|
| 整數類型  |
|long long|長長整數|8|-9,223,372,036,854,775,808 至 9,223,372,036,854,775,807|
| long int     | 長整數     | 4     |-2147483648~2147483647|
|  int     | 整數     | 4     |-2147483648~2147483647|
| short int     | 短整數     | 2     |-32768~32767|
|unsigned long long|無號長長整數|8|0 到 18,446,744,073,709,551,615|
|unsigned long int|無號長整數|4|0~4292967295|
|unsigned int|無號整數|4|0~4292967295|
|unsigned short int|無號短整數|2|0~65535|
|  浮點數類型    |      |      ||
|   float   |  （單精度）浮點數    |  4    |1.2e^-38^~3.4e^38^|
|   double   |  （雙精度）浮點數    |  8    |2.2e^-308^~1.8e^308^|
|字元類型|||
| char     |    字元  |  1    |ASCII CODE|
|(C++11)char16_t|UTF16|16|unicode 編碼|
|(C++11)char32_t|UTF32|32|unicode 編碼|
|布林類型|||
|bool|布林值|1|true, false|
:::spoiler
C++11 標準新增char16_t, char32_t來表示UTF-16, UTF-32字元，
亦新增long long的整數型態
:::
### 變數宣告
```cpp=
//只宣告型別，代賦值
type name1,[name2,name3,...];
int a,b,c;
//型別、值同時宣告
type name=number;
int a=1,b=2;
//亦可混合，部分賦值、部份不賦值
int a,b=33,c;
```
### 細說型別與變數
#### 宣告？？變數？？常數？？
***變數***，即為一可變的數，恰與亙久不變的***常數***相反，然而不管變數變了多少次，其在記憶體內的佔用空間不會改變（，故資料精度大於記憶體分配空間則會造成資料數值錯誤的**溢位overflow**現象）;**宣告**的概念，會指定實體的唯一名稱，以及其型別和其他特性的相關資訊。
#### 字面常數literal
即程式中直接寫出來的數值value
#### bool
宣告(declare)布林型態的變數使用關鍵字(keyword) **bool**，其字面值有true和false，分別代表1,0，邏輯上的真與假
#### int, long int, short int
一般而言，最常用的是int型態，***沒有特別指定的整數字面常數皆會被視為int型態，欲使用long型態，則需在字面常數的尾巴加上l或Ｌ***
```cpp=
int a=1;
long b=1234l;
```
#### float &double
最常使用的是double，***沒有特別指定的浮點數字面常數會被視為double，欲使用float型態，需在字面常數尾加上f或F***
```cpp=
double a=2458.3721;
float p=22.0f;
```
#### char
宣告字元型態的變數使用關鍵字**char**，字元型態的字面常數為*單引號圍起來的單一字元*，或是單引號圍起來反斜線加上四位的十六位元數字
```cpp=
char e='a';
char f='2';
char i='\n';
char k='\a';
```
在上面程式碼區塊的3,4行可以看到由反斜線\加上一個英文字母的組合文字，其稱作**跳脫字元**，即一些不可見字元（換行、對其、雙引號（因已被定義））


變數若不是基本內建型態則代表他是個物件，看得懂的話可以先看[指標與參考](https://hackmd.io/4uvLo6aeTEGL1KEiA2oXFw#指標與參考)
#### 變數命名原則（識別字命名原則）
* 變數命名原則
    1. 變數的命名以簡單、清楚為原則，常見小寫英文單字ex. iter, total...；或以底線連接多個單字而成ex. exam_score,count_time...
    2. 數字不能是識別字的開頭，另建議不要以兩個連續的底線命名（程式庫中的很多函式都是這樣命名，會衝突）
    3. 每個英文單字之間不能有空格，因空格是區分兩個程式中記號的符號
* 型態type如類別class、結構structure、列舉enumeration使用的識別字以大寫駝峰式命名法, ex.SimpleGame, RunTimeExpection
* 函數的命名亦已大寫駝峰式命名，第一字通常為動詞
* 簡易函式、或類別中的存取、修改函數，較常用小寫字母組合
## 運算式expression與陳述statement
***ＣＰＰ中的每一行，都為一陳述，而每行陳述，可以運算式組成***
### 運算式expression＝運算元oprand＋運算子operator
* operand1; 單一運算元
* operand1 operator operand2; 運算元＋運算子
* operand1? operand2 : operand3; 具條件判斷功能之運算式
#### 算術運算子 arithmetic operator
包括加減乘除取餘數，分別符號為+\-\*\/%，使用概念和數學的概念一模模一樣樣，唯有一個要注意的就是除法時要注意捨去的問題：
```cpp=
int a=1,b=3;
cout<<a/b;//輸出值應該要是0.333
```
實際結果：![](https://i.imgur.com/W5ab7ja.png)，然而浮點數除法就不會有此問題，因此要將原函式改為：
```cpp=
float a=1,b=3;
cout<<a/b;//輸出值應該要是0.333
//或
int a=1,b=3
cout<<(float)a/b;
```
此寫法稱為型別的強制轉換，原本a是整數，但在進行運算時加上了(float)的前綴使其暫時轉為浮點數進行運算，故其小數值不會被捨掉。

大家可以試試看此段程式碼，看結果有何不同：
```cpp=
int a=1,b=3;
cout<<float(a/b);
```
結果 :arrow_down_small: 
:::spoiler
答案應該也是0對吧
原因是因為在電腦中的運算，和數學中的運算一樣也有先後順序
在這邊的步驟是：先算出1/3，但因為是整數除法得值為0，再將0轉為浮點數，得值依舊為0
:::
## if述句 (if statement)
三種寫法：
```cpp=
if(/*condition*/)single_line_states;
```
```cpp=
if(/*condition*/){
    statement1;
    statement2;
    ~
    statementN;
}
```
```cpp=
if(/*condition1*/){
    statement1;
    ~
}
else{
    statement2;
    ~
}
```
```cpp=
if(/*condiotion1*/){
    statement1;
}
else if(/*condition2*/){
    statement2;
}
~
~
else if(/*conditionN*/){
    statementN;
}
else{
    statementN_1;
}
```
## if-else變形：switch statement
```cpp=
switch(variables){
case const1:
    states;
    break;
case const2:
    states;
    break;
default:
    states;
}
```
## while述句 (while statement)
## 指標與參考
> 指標pointer儲存變數的記憶體位址address，參考reference為變數的別名alias。

宣告指標變數使用\*運算子，範例如下
```cpp=
#include <iostream>
using namespace std;
int main(void){
    //設值n 為整數11
    int n = 11;
    cout << n << endl;
    //設置np為指向n的指標，＆為取址運算子
    int *np = &n;
    cout << np << endl;
    //設定t取得從np位址指向的值，*為反參考運算子
    int t = *np;
    cout<< t << endl;
    return 0;
}
```
設置完n的值為11後，
```cpp=
int *np = &n ;
cout<< np << endl;
```
用np取得n的記憶體位址，\*np中的\*用來宣告指標，＆運算子可取得變數之位址。這段程式碼的完整解釋為：\*宣告np變數為指標形式後，由取址運算子&取得n之位址，儲存於np中。
前面的int 為**指標指向的變數位址所對應的變數的型態**，在這邊，即是指n的型態，所以是int，若n為float，則程式為：
```cpp=
float n = 11.0f;
float *np = &n;
```
```cpp=
int t = *np;
cout << t << endl;
```
同樣是*，但這次出現在等號的右邊，則變成了**反參考運算子**，由t取得np所儲存記憶體位址變數的值；這裡的np儲存的為n的記憶體位址，所以t藉由\*np反參考取得n之值，（＃2行）輸出11
* 指標 \*p：可儲存物件的記憶體位址
* 取址運算子&n：取得變數、物件的記憶體位址
* 反參考運算子=\*p：由指標取得指向物件之值

### new關鍵字

## Error Code
## Reference 參考資料
* <C++ Primer 11st ED.>
* <旗標出版 C++教學手冊 洪偉恩著>
* [C++ 入門手冊]()
* [Microsoft® developers DOCS](https://docs.microsoft.com/zh-tw/cpp/?view=msvc-160)
* http://billor.chsh.chc.edu.tw/IT/Supply/01.pdf