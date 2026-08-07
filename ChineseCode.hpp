// Written by MsintX
// Powered by JetBrains CLion

// SPDX-License-Identifier: GPL-3.0-only
// Copyright (C) 2026 HitBits Lab
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, version 3 of the License.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.

#pragma once

// 标准库引入
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <thread>
#include <chrono>
#include <list>
#include <set>
#include <queue>
#include <stack>
#include <memory>

// 类型和算法
#define 自动类型     auto
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
#define 列表          std::list
#define 集合          std::set
#define 栈            std::stack
#define 队列          std::queue
#define 排序          std::sort

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

// 全局函数
#define 主函数 main

// 面向对象
#define 类 class
#define 结构 struct
#define 公有 public
#define 私有 private
#define 保护 protected
#define 虚 virtual
#define 静态 static
#define 常量 const

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
    #define 设置控制台输出编码(code) SetConsoleOutputCP(code)
    #define 设置控制台编码(code)     SetConsoleCP(code)
#elif defined(__APPLE__) || defined(__linux__)
    // 忽略传入的参数，因为绝大多数都是UTF-8，像这种头文件的用处不太可能需要其他编码
    #define 设置控制台输出编码(code) setenv("LANG", "en_US.UTF-8", 1)
    #define 设置控制台编码(code)     setenv("LC_ALL", "en_US.UTF-8", 1)
#else
    // 不是Windows，不是MacOS也不是Linux，那比较冷门了
    #define 设置控制台输出编码(code)
    #define 设置控制台编码(code)
#endif

// 异常处理
#define 尝试 try
#define 捕获 catch
#define 抛出 throw

// 类型转换
#define 静态转换 static_cast
#define 动态转换 dynamic_cast
#define 常量转换 const_cast
#define 重解释转换 reinterpret_cast

// 参数
#define 参数个数 argc
#define 参数列表 argv

// 指针
#define 取址       &
#define 引用       &
#define 指针 *
#define 解引用 * 
#define 共享指针     std::shared_ptr
#define 唯一指针     std::unique_ptr
#define 弱指针       std::weak_ptr
#define 创建共享     std::make_shared
#define 创建唯一     std::make_unique

// 未分类
#define 标准域      std
#define 声明        using
#define 定义类型别名 using
#define 命名空间    namespace
#define 遍历        for
#define 读取单个字符    cin.get()

// 容器大小/元素个数/字符串长度，由于技术限制无法define，故使用模板函数。
template <typename T>
auto 容器大小(const T& 容器) -> decltype(容器.size()) {
    return 容器.size();
}

template <typename T>
auto 元素个数(const T& 容器) -> decltype(容器.size()) {
    return 容器.size();
}

template <typename T>
auto 字符串长度(const T& 文本) -> decltype(文本.length()) {
    return 文本.length();
}

// Informal release documents do not have Release-level quality assurance
// The developer (MsintX) promises 1 year(2026.8.4-2027.8.4) of feature updates and 3 years(2026.8.4-2029.8.4) of security updates for this file/project.
// This product may receive special updates.