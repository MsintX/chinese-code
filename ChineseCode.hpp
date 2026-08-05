/*
    ========制作标记&IDE说明========
   Written by MsintX
   Powered by JetBrains CLion
*/

/*
    ========版权声明&使用提醒========
    文件使用GPLv3协议（GPLv3 Only），最终解释权归MsintX（msintx@sina.cn）所有。
    文件在JetBrains CLion中制作，请不要用于正式项目，我不希望因为写了几个define的文件和某些抓语法抠字眼的起争执。
*/

#pragma once

// 标准库引入
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <thread>
#include <chrono>

// 类型系统
#define 整数         int
#define 长整数       long
#define 超长整数     long long
#define 无符号整数   unsigned int
#define 浮点数         double
#define 字符         char
#define 字符串       std::string
#define 布尔         bool
#define 动态数组      std::vector
#define 映射         std::map
#define 无类型       void

// 流对象
#define 输出                 std::cout
#define 输出错误信息          std::cerr
#define 读取输入             std::cin
#define 换行                  '\n'
#define 换行强制刷新缓冲区   std::endl

// 逻辑
#define 如果     if
#define 否则     else
#define 否则如果  else if
#define 选择     switch
#define 情况     case
#define 默认     default
#define 返回     return
#define 跳出     break
#define 继续     continue

// 循环三兄弟
#define 循环   for
#define 每当   while
#define 执行   do

// 布尔
#define 真     true
#define 假     false
#define 空指针  nullptr

// 逻辑运算符
#define 并且     &&
#define 或者     ||
#define 不       !
#define 非       !
#define 等于     ==
#define 不等于   !=
#define 大于     >
#define 小于     <
#define 大等于   >=
#define 小等于   <=
#define 赋值为    =
#define 递增     ++
#define 递减     --

// 主函数
#define 主函数 main

// 阻塞
#define 等待 std::this_thread::sleep_for

//时间单位
#define 纳秒 std::chrono::nanoseconds
#define 微秒 std::chrono::microseconds
#define 毫秒 std::chrono::milliseconds
#define 秒   std::chrono::seconds
#define 分钟 std::chrono::minutes
#define 小时 std::chrono::hours
#define 天   std::chrono::days //C++ 20+
#define 周   std::chrono::weeks //C++ 20+
#define 月   std::chrono::months //C++ 20+
#define 年   std::chrono::years //C++ 20+

// 控制台编码
#ifdef _WIN32
    #include <windows.h>
    #define 设置控制台输出编码 SetConsoleOutputCP
    #define 设置控制台编码     SetConsoleCP
#else
    // 在非 Windows 平台 宏定义空 在非WIN32使用下面（#endif为止）中文指令会被替换为空操作
    #define 设置控制台输出编码(...)
    #define 设置控制台编码(...)
#endif

// 未分类
#define 标准库      std
#define 声明        using
#define 定义类型别名 using
#define 命名空间    namespace
#define 取址       &
#define 引用       &
#define 容器大小 .size()
#define 元素个数 .size()
#define 字符串长度 .length()
#define 遍历        for
#define 获取        get

// Informal release documents do not have Release-level quality assurance
// The developer (MsintX) promises 1 year(2026.8.4-2027.8.4) of feature updates and 3 years(2026.8.4-2029.8.4) of security updates for this file/project.
// This product may receive special updates.