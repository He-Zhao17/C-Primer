C++Primer 学习笔记



# C++的基本命令

```c
cout << endl
```

其中 `end1` 是一种控制符号（manipulator）代表换行符`\n` .





`CHAR_BIT`代表字节长度

`INT_MAX`代表最大int长度

这些都存储在`climts`文件中。



# C++的特殊初始化方法

```c++
int c = {}; // c==0
int c{};    // c==0
int c = {1}; // c==1
int c{1}; // c==1
```



# cout的其他进制切换

```c++
cout << hex // 16
cout << oct // 8
cout << dec //10
```

此外 c++对于长字符串（比如日本或者中文），使用一种`wchar_t` 类型，此时使用`wcin`和`wcout` 。

后来又不够了使用`char16_t` 和`char32_t` .

```c++
char16_t ch1 = u'q'; //basic character in 16-bit form
char32_t ch2 = U"\U0000222B" //universal character name in 32-bit form
```



# const限定符

需要定义常量有两种方法

```c++
#DEFINE MONTHS = 12
const int Months = 12;
```

但const的好处在于更加灵活（可以设置不同的类型）；可以限定定义常量在制定的域中；可以指定特定的类型。

但同时最好在声明const变量时，就将其初始化。

```c++
const int Months = 12; //good

const int Months;
Months = 12;           //Too late;
```

# 浮点数

`float`等类型的长度在`flood.h`或者`cfloat` 中有记载。（由系统决定）

# 对于使用{}进行变量初始化

1. 不允许将浮点数转换为整型；

2. 不允许将长度缩窄

   ```
   char c1 = {3712898379821} //not allowed 
   ```

   

3. 不同整形之间转换或者整形-》浮点数ok。

4. 不能在{}使用变量， 编译器只知道变量未知不会追踪变量当前的值。



# 强制转换

```c++
(int) x ; //C风格
int (x); // C++ 风格
```

