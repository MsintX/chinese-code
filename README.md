> 部分宏依赖C++ 20支持，标准版本不建议低于20，否则可能导致编译器报错/无法使用部分宏
> 引入该文件可能造成全局污染（define并不会被包含在命名空间） 请谨慎include。

## 开发者的留言
中文编程**不能**直接替代原版C++，英文关键字不是一句没空格的词语能替代，报错会提示原错误信息（换句话说，你写**整数** 1.2; 编译器不会提示无法转换整数 会提示无法将**int**隐式转换为double。），语法也涉及英文及其半角字符（小括号、花括号 include等）
如果你真的对编程感兴趣，那就不应该在“中英文”这里被卡住，本文件可能并不包含全部的指令。

# ChineseCode(Head Files)

这是一个使用宏将C++部分英文关键字替换为中文（准确来说是定义别）的头文件

## 使用方法
使用方法分为2种，推荐使用方法1。
1.当前目录引用：将“ChineseCode.hpp”放在代码同一目录，然后在代码中#include "ChineseCode.hpp"。
2.全局目录引用：将“ChineseCode.hpp”放在gcc/clang/msvc的头文件/标准库根目录，然后在代码中#include <ChineseCode.hpp>。
> 方法2将自定义头文件保存在编译器头文件/标准库根目录是极其危险的行为，这样可能导致头文件在某次编译器更新中覆盖，并且将来如果更新ChineseCode.hpp（概率很小）可能导致头文件冲突。

## 代码比较示例

```cpp (Chinese)
#include "ChineseCode.hpp"

声明 命名空间 std; // 提醒一句 这里不推荐直接声明整个命名空间

整数 主函数() {
  输出 << "你好，世界！" << 换行强制刷新缓冲区;
  返回 0;
}
```

```cpp (English)
#include <iostream>

using namespace std; //与上述一致

int main() {
  cout << "Hello World!" << endl;
  return 0;
}
```

## 原理介绍
define，在C++的作用为定义一个宏，可以理解成为命令起别名 语法为#define <别名> <原命令> 利用这个原理 我们可以实现任何语言的编程。
    但多个#define会导致全局污染（在YouTube/Bilibili有讲解），且无法放在namespace中隔离（也就是说，在namespace里面#define 外面再using namespace的方法无效，定义的宏仍然会全局可用。）
    所以，我们——好吧只有我一个，将其制作成了hpp（Head）文件，也就是头文件。在需要时可以引入进来 不需要时（即这个文件没有任何中文代码）建议取消引入。

## 支持的宏

| 原关键词 | 宏名称 |
| --- | ---        |
| int     | 整数    |
| long | 长整数    |
| long long | 超长整数    |
| unsigned int   | 无符号整数     |
| double | 浮点数     |
| char   | 字符     |
| std::string   | 字符串     |
| bool   | 布尔     |
| std::vector   | 动态数组     |
| std::map   | 映射 |
| void  | 无类型     |

* 由于篇幅原因，更多宏支持请前往[头文件](./ChineseCode.hpp)查看 语法均为#define <宏名称> <原关键词>。

## 版权声明

本项目/文件遵循GPLv3（GPLv3 Only 指仅遵循GPL的第三个版本，不被后续更新影响）协议，以下是原文精简示例。
``` Text
    ========GPLv3 License (Simplified)========
    
    Copyright (C) 2026-2029 MsintX
    
    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.
    
    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
    GNU General Public License for more details.
    
    You should have received a copy of the GNU General Public License
    along with this program. If not, see <https://www.gnu.org/licenses/>.
    
    ========GPLv3 Core Terms========
    
    1. You are free to use, modify, and distribute this software for any purpose,
       including commercial use.
    
    2. When distributing source code or binaries, you must include this copyright
       notice and license declaration.
    
    3. If you distribute modified versions, you must open-source the full source
       code of your modifications under GPLv3.
    
    4. If you distribute binaries, you must provide a way to obtain the source code
       (e.g., include a download link).
    
    5. This software is provided WITHOUT ANY WARRANTY. The author is not liable
       for any damages caused by using this software.
```

中文：
``` Text
 ========GPLv3 协议（Simplified）========
    
    Copyright (C) 2026 MsintX
    
    本程序是自由软件：你可以根据自由软件基金会发布的 GNU 通用公共许可证
    第 3 版（或任何更新版本）的条款重新分发和/或修改它。
    
    本程序的分发是希望它有用，但没有任何担保；甚至没有隐含的
    适销性或特定用途适用性的担保。详见 GNU 通用公共许可证。
    
    你应该已经收到一份 GNU 通用公共许可证的副本。
    如果没有，请访问 <https://www.gnu.org/licenses/>。
    
    ========GPLv3 核心条款========
    
    1. 你可以自由使用、修改、分发本软件，用于任何目的（包括商业）。
    
    2. 分发源码或二进制时必须附带本版权声明和许可声明。
    
    3. 如果分发修改后的版本，必须以 GPLv3 开源修改后的完整源码。
    
    4. 如果你分发二进制文件，必须提供获取源码的途径（例如附上源码下载链接）。
    
    5. 不提供任何形式的担保，作者不对使用本软件造成的损失承担责任。
```
> Tips:最终解释权归开发者[MsintX](mailto:msintx@sina.cn)所有

## 更新日志
> Tips:此处粘贴了日志原文，但这种方式已经弃用。请查看[更新日志文件](./UpdateLog.md)。
``` Log
2026/8/4
无，介绍请见README

2026/8/5
修改了vector（向量更改为动态数组）等宏的名称。
添加了“声明”“定义类型别名”“命名空间”等宏。
修复了#define 长度 .size()存在歧义且部分场景报错的问题。
```

## 更新计划&质量说明
此文件/项目跟随HitBits的常规更新计划/生命周期，拥有1年(2026.8.4-2027.8.4)的质量更新以及3年(2026.8.4-2029.8.4)的安全扩展。
>非Release级项目不保证质量。
> 文件/项目在安全扩展结束后仍可能有特例更新。

## 关于我们
"HitBits Lab"是由[MsintX](https://Github.com/MsintX)创建的非商业团队。我们将持续产出应用、游戏（计划中）以及各种奇奇怪怪的想法。你也可以去[官网](https://hitbits.cn/)了解更多（预计在2027年建站）

## 赞助我们
HitBits Lab使用的IDE为[Visual Studio 2026](https://visualstudio.microsoft.com/zh-hans/) Community（C#/WinUI/WPF）或[CLion](https://www.jetbrains.com/zh-cn/clion/)非商业授权版本（C/C++），因此不会通过付费分发或赞助来获取利益。感谢你的支持，这将会是HitBits Lab前进的动力！