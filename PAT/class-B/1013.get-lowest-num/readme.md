---
Description: The file is about class B 1013.
---
>时间限制 1000 ms 内存限制 32768 KB 代码长度限制 100 KB 判断程序 Standard
## 题目描述
>给定数字0-9各若干个。你可以以任意顺序排列这些数字，但必须全部使用。目标是使得最后得到的数尽可能小（注意0不能做首位）。例如：
>给定两个0，两个1，三个5，一个8，我们得到的最小的数就是10015558。
>现给定数字，请编写程序输出能够组成的最小的数。
## 输入描述
>每个输入包含1个测试用例。每个测试用例在一行中给出10个非负整数，顺序表示我们拥有数字0、数字1、……数字9的个数。整数间用一个空
格分隔。10个数字的总个数不超过50，且至少拥有1个非0的数字。
## 输出描述
>在一行中输出能够组成的最小的数。
## 输入例子
>2 2 0 0 0 3 0 0 1 0
## 输出例子
>10015558

## 自己的思考
利用一个10的数组接收数字。统计总量，开一个总量大小的数组，依次填充满。
```c

```